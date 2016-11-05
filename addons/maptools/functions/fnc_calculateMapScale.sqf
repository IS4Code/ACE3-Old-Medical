/*
 * Author: esteldunedain
 * Returns the equivalent of 100m in screen coordinates
 *
 * Arguments:
 * None
 *
 * Return Value:
 * No
 *
 * Public: No
 */
#include "script_component.hpp"

private _pos = ((findDisplay 12) displayCtrl 51) ctrlMapScreenToWorld [0.5, 0.5];
private _screenOffset = ((findDisplay 12) displayCtrl 51) posWorldToScreen [(_pos select 0) + 100, (_pos select 1)];

(_screenOffset select 0) - 0.5
