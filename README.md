# ElgEditorScripting

ElgEditorScripting is an Unreal Engine 5.0 editor only plugin created to extend the possibilities of Editor Utility Widgets. 

The plugin add basic Level Editor events like OnActorAdded/Deleted/Selected, OnBegin/EndPIE, OnMouseClick, OnInputKey and more.<br>
For the Content Browser it has events like OnAssetCreated/Removed/Renamed and Selected/Deselected.

It also add nodes to get the MousePosition, Read/Write to config files, Load/Reload/Compile Modules, Show the SlowTask UI, Add/Remove Components/Interfaces. Open/Close EditorWidgets* and set the EditorWidget tab Label and tooltip.

[ElgSoft.com](http://elgsoft.com/ccount/click.php?id=main), 
[Unreal Forum thread](https://forums.unrealengine.com/community/community-content-tools-and-tutorials/1618595-free-elgeditorscripting-editor-utility-widget-extension-events-and-stuff)

1.0.5 Fixed so SlowTask work again in UE5.
![SlowTask](http://elgsoft.com/Images/EditorScripting/slowtask.gif)<br>

1.0.4 Added support to get an Editor Widget instace so you can access it and do cool stuff.
![GetEditorWidget](http://elgsoft.com/Images/EditorScripting/LEC_GetEditorWidget.png)<br>

1.0.2 Exposed Notifications to Blueprints.<br>
![Notifications](http://elgsoft.com/Images/EditorScripting/Notifications.gif)<br>

1.0.1 Exposed PluginManager to Blueprints.

Here is a Custom PluginBrowser created in EditorWidgets using the new PluginManager nodes.
![PluginBrowser](http://elgsoft.com/Images/EditorScripting/Tool_PluginBrowser.png)<br>


## Level Editor Context

Thru the Level Editor Context object, you can bind events and query level editor specific data like mouse position or if the level editor viewport are in focus.

![LevelEditorContext](http://elgsoft.com/Images/EditorScripting/LEC_OnActorSelectionChanged.png)<br>
Examples can be found in EW_EditorContexts_LevelEditor.

Events that are exposed in the plugin are:<br>
OnLevelActorAdded, OnLevelActorDeleted, OnLevelActorAttached, OnLevelActorDetached, OnActorMoved, OnActorSelectionChanged, OnActorSelected, OnActorDeselected, OnWorldAdded, OnWorldDestroyed, OnMapOpened, OnMapChanged, OnEditorModeChanged, OnEnterMode, OnExitMode, OnEditorCameraMoved, OnFocusViewportOnActors, OnBeginPIE, OnPausePIE, OnResumePIE, OnEndPIE, OnBeginStandaloneLocalPlay, OnLeftMouseClick, OnMiddleMouseClick, OnRightMouseClick, OnInputKey.

Blueprint Nodes:<br>
GetMousePosition, GetMousePositionWorld, GetActorUnderMouse, LineTrace, HasFocus, GetEditorMode, IsInPIE, IsInEditor, IsViewportRealtime, SetViewportRealtime, RestoreViewportRealtime, MoveViewportCameraToActor.

Example of spawning and actor on the mouse cursor position in the level editor on middle mouse click.
![LevelEditorContext_spawn](http://elgsoft.com/Images/EditorScripting/LEC_SpawnOnClick.png)<br>

## Asset Browser Context
Thru the Asset Browser Context object, you can bind asset related events.

![OnAssetAdded](http://elgsoft.com/Images/EditorScripting/CBC_OnAssetAdded.png)<br>
Examples can be found in EW_EditorContexts_AssetBrowser.

Events that are exposed in the plugin are:<br>
OnAssetCreated, OnAssetRemoved, OnAssetRenamed, OnAssetSelectionChanged, OnAssetSelected, OnAssetDeselected

## Config Context
The Config Context let you read/write to config ini files in the "Project/Config/" folder by specifying the Config filename and the config section.

![ConfigContext](http://elgsoft.com/Images/EditorScripting/CC_ReadInt.png)<br>
Examples can be found in EW_EditorContexts_Config.

Supported data types are:<br>
String, Int, Float, Text, Bool, StringArray, Color, Vector2d, Vector, Vector4, Rotator.


## Module Manager
The plugin expose Module Manager functionality to blueprints so you can Load/Unload/Recompile module from Editor Widgets.

![ModuleManager](http://elgsoft.com/Images/EditorScripting/ModuleManager_Recompile.png)<br>
Examples can be found in EW_BlueprintNodes_ModuleManager and EW_ToolbarButton_Compiler.

GetModuleNames, GetModulesStatus, GetModuleStatus, RecompileModule, LoadModule, UnloadModule, ReloadModule, CanShutdownModule, CanRecompileModule, IsModuleLoaded, CanHotReloadModule, CanDynamicReloadModule.


## Slow Task
The plugin exposes the SlowTask progress bar UI so your tool can show the progress. It has an option if the user should be able to cancel the progress.

![SlowTask](http://elgsoft.com/Images/EditorScripting/slowtask.gif)<br>
Examples can be found in EW_ToolbarButton_SlowTask.

BeginSlowTask, EndSlowTask, StatusUpdate, UpdateProgress, RecivedUserCancel.


## UBlueprint
The plugin has a bunch of helper blueprint nodes to work on Blueprint Objects, like the possibility to add/remove Components, add/remove Interfaces and Compile them.

![UBlueprint](http://elgsoft.com/Images/EditorScripting/Ublueprint_add_remove_component.png)<br>
Examples can be found in EW_BlueprintNodes_UBlueprint.

AddComponent, RemoveComponent, GetInterfaces, ImplementInerface, AddInterface, RemoveInterface, CompileBlueprint, GetBlueprintFromAssetData, GetComponents, GetComponentsOfClass, GetComponentOfClass.

## Assets
Helper blueprint nodes for working with AssetData and AssetObject.

![Assets](http://elgsoft.com/Images/EditorScripting/asset_nodes.png)<br>
Examples can be found in EW_BlueprintNodes_Assets.

FixRedirectors, GetAssetDateModified, GetAssetDiskPath, GetAssetObjects, GetAssetObjectsMetaData, 
GetAssetObjectsWithMetaDataKey, GetMetaDataBranch, GetAssetMetaData.

## EditorWidget
Blueprint nodes that add the possibility to change the tab name, open or close another Editor Widget.
* Opening and closing of Editor Widgets only work if the widget has been Run before.

![EditorWidget](http://elgsoft.com/Images/EditorScripting/EditorWidgetToggle.gif)<br>

![EditorWidgetOpen](http://elgsoft.com/Images/EditorScripting/BP_OpenEditorWidget_smaller.png)<br>

Examples can be found in EW_BlueprintNodes_EditorWidget.

OpenEditorWidget*, CloseEditorWidget*, ToggleEditorWidget*, IsEditorWidgetOpen, IsEditorWidgetRegistered, SetEditorWidgetLabel, 
GetEditorWidgetLabel, SetEditorWidgetToolTip, EditorWidgetDrawAttention.

## LevelActor
If you modify a Level Actors transformation in an Editor Widget the editor won't be notified about the change and wont prompt if you want to save the change when closing the map, so the plugin comes with the MarkActorAsDirty node that will fix that.

![LevelActor](http://elgsoft.com/Images/EditorScripting/levelactor_nodes.png)<br>
Examples can be found in EW_ToolbarButton_MoveSelectedToMouse and EW_ToolbarButton_RunConstructionScript.

RunConstructionScript, MarkActorAsDirty

## Plugin Manager
Expose plugin functionality to blueprints so you can Enable/Disable plugins, Package a plugin or get the description with information about the plugin.

![PluginManager](http://elgsoft.com/Images/EditorScripting/PluginManager_nodes.png)<br>
Examples can be found in EW_BlueprintNodes_PluginManager.

EnablePlugin, DisablePlugin, SetPluginEnabled, GetPluginIconTexture, GetPluginDescription, GetPluginDescriptions, GetPluginCategory, PackagePlugin.

## Notifications
Expose Notification functionality to blueprints so you can show notifications from blueprint nodes.

![Notifications](http://elgsoft.com/Images/EditorScripting/Notifications.gif)<br>
![NotificationsSetup](http://elgsoft.com/Images/EditorScripting/Notification_node.png)<br>


## Usage
Just drag the Plugins/ElgEditorScripting folder into your <YourGameProject>/Plugins/ folder (create it at the same level as your content folder if you don't have one already) and open your project.

  
## Legal
Copyright © 2019, Elg Soft. Licensed under the MIT License, see the file LICENSE for details.
