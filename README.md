# ElgEditorScripting

ElgEditorScripting is an Unreal Engine 4.22 editor only plugin created to extend the possibilities of Editor Utility Widgets. 

The plugin add basic Level Editor events like OnActorAdded/Deleted/Selected, OnBegin/EndPIE, OnMouseClick, OnInputKey and more.<br>
For the Content Browser it has events like OnAssetCreated/Removed/Renamed and Selected/Deselected.

It also add nodes to get the MousePosition, Read/Write to config files, Load/Reload/Compile Modules, Show the SlowTask UI, Add/Remove Components/Interfaces. Open/Close EditorWidgets* and set the EditorWidget tab Label and tooltip.

[ElgSoft.com](http://elgsoft.com/ccount/click.php?id=main)

## Level Editor Context

Thru the Level Editor Context object, you can bind events and query level editor specific data like mouse position or if the level editor viewport are in focus.

![LevelEditorContext](https://elgsoft.com/Images/EditorScripting/LEC_OnActorSelectionChanged.png)<br>
Examples can be found in EW_EditorContexts_LevelEditor.

Events that are exposed in the plugin are:<br>
OnLevelActorAdded, OnLevelActorDeleted, OnLevelActorAttached, OnLevelActorDetached, OnActorMoved, OnActorSelectionChanged, OnActorSelected, OnActorDeselected, OnWorldAdded, OnWorldDestroyed, OnMapOpened, OnMapChanged, OnEditorModeChanged, OnEnterMode, OnExitMode, OnEditorCameraMoved, OnFocusViewportOnActors, OnBeginPIE, OnPausePIE, OnResumePIE, OnEndPIE, OnBeginStandaloneLocalPlay, OnLeftMouseClick, OnMiddleMouseClick, OnRightMouseClick, OnInputKey.

Blueprint Nodes:<br>
GetMousePosition, GetMousePositionWorld, GetActorUnderMouse, LineTrace, HasFocus, GetEditorMode, IsInPIE, IsInEditor, IsViewportRealtime, SetViewportRealtime, RestoreViewportRealtime.

Example of spawning and actor on the mouse cursor position in the level editor on middle mouse click.
![LevelEditorContext_spawn](https://elgsoft.com/Images/EditorScripting/LEC_SpawnOnClick.png)<br>

## Asset Browser Context
Thru the Asset Browser Context object, you can bind asset related events.

![OnAssetAdded](https://elgsoft.com/Images/EditorScripting/CBC_OnAssetAdded.png)<br>
Examples can be found in EW_EditorContexts_AssetBrowser.

Events that are exposed in the plugin are:<br>
OnAssetCreated, OnAssetRemoved, OnAssetRenamed, OnAssetSelectionChanged, OnAssetSelected, OnAssetDeselected

## Config Context
The Config Context let you read/write to config ini files in the "Project/Config/" folder by specifying the Config filename and the config section.

![ConfigContext](https://elgsoft.com/Images/EditorScripting/CC_ReadInt.png)<br>
Examples can be found in EW_EditorContexts_Config.

Supported data types are:<br>
String, Int, Float, Text, Bool, StringArray, Color, Vector2d, Vector, Vector4, Rotator.


## Module Manager
The plugin expose Module Manager functionality to blueprints so you can Load/Unload/Recompile module from Editor Widgets.

![ModuleManager](https://elgsoft.com/Images/EditorScripting/ModuleManager_Recompile.png)<br>
Examples can be found in EW_BlueprintNodes_ModuleManager and EW_ToolbarButton_Compiler.

GetModuleNames, GetModulesStatus, GetModuleStatus, RecompileModule, LoadModule, UnloadModule, ReloadModule, CanShutdownModule, CanRecompileModule, IsModuleLoaded, CanHotReloadModule, CanDynamicReloadModule.


## Slow Task
The plugin exposes the SlowTask progress bar UI so your tool can show the progress. It has an option if the user should be able to cancel the progress.

![SlowTask](https://elgsoft.com/Images/EditorScripting/slowtask.gif)<br>
Examples can be found in EW_ToolbarButton_SlowTask.

BeginSlowTask, EndSlowTask, StatusUpdate, UpdateProgress, RecivedUserCancel.


## UBlueprint
The plugin has a bunch of helper blueprint nodes to work on Blueprint Objects, like the possibility to add/remove Components, add/remove Interfaces and Compile them.

![UBlueprint](https://elgsoft.com/Images/EditorScripting/Ublueprint_add_remove_component.png)<br>
Examples can be found in EW_BlueprintNodes_UBlueprint.

AddComponent, RemoveComponent, GetInterfaces, ImplementInerface, AddInterface, RemoveInterface, CompileBlueprint, GetBlueprintFromAssetData, GetComponents, GetComponentsOfClass, GetComponentOfClass.

## Assets
Helper blueprint nodes for working with AssetData and AssetObject.

![Assets](https://elgsoft.com/Images/EditorScripting/asset_nodes.png)<br>
Examples can be found in EW_BlueprintNodes_Assets.

FixRedirectors, GetAssetDateModified, GetAssetDiskPath, GetAssetObjects, GetAssetObjectsMetaData, 
GetAssetObjectsWithMetaDataKey, GetMetaDataBranch, GetAssetMetaData.

## EditorWidget
Blueprint nodes that add the possibility to change the tab name, open or close another Editor Widget.
* Opening and closing of Editor Widgets only work if the widget has been Run before.

![EditorWidget](https://elgsoft.com/Images/EditorScripting/EditorWidgetToggle.gif)<br>

![EditorWidgetOpen](https://elgsoft.com/Images/EditorScripting/BP_OpenEditorWidget_smaller.png)<br>

Examples can be found in EW_BlueprintNodes_EditorWidget.

OpenEditorWidget*, CloseEditorWidget*, ToggleEditorWidget*, IsEditorWidgetOpen, IsEditorWidgetRegistered, SetEditorWidgetLabel, 
GetEditorWidgetLabel, SetEditorWidgetToolTip, EditorWidgetDrawAttention.

## LevelActor
If you modify a Level Actors transformation in an Editor Widget the editor won't be notified about the change and wont prompt if you want to save the change when closing the map, so the plugin comes with the MarkActorAsDirty node that will fix that.

![LevelActor](https://elgsoft.com/Images/EditorScripting/levelactor_nodes.png)<br>
Examples can be found in EW_ToolbarButton_MoveSelectedToMouse and EW_ToolbarButton_RunConstructionScript.

RunConstructionScript, MarkActorAsDirty


## Usage
Just drag the Plugins/ElgEditorScripting folder into your <YourGameProject>/Plugins/ folder (create it at the same level as your content folder if you don't have one already) and open your project.

  
## Legal
Copyright © 2019, Elg Soft. Licensed under the MIT License, see the file LICENSE for details.
