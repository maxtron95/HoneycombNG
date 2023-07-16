[HoneycombNG]
Meter=Image
H=#HoneycombSize#
ImageName=#@#\#IconMono#.png
ImageTint=#ClearColor#
GreyScale=1

[Base]
Meter=Image
ImageName=#@#Base\base_clear.png
ImageTint=#ClearColor#
LeftMouseUpAction=#Action#
H=#HoneycombSize#

[Hover]
MouseOverAction=[!SetVariable "HovColor" "#ClearColor#"][!UpdateMeter HoverIndicator][!Redraw]
MouseLeaveAction=[!SetVariable "HovColor" "255, 255, 255, 0"][!UpdateMeter HoverIndicator][!Redraw]
DynamicVariables=1
ImageTint=#HovColor#

[HoverIndicator]
Meter=Image
Meterstyle=Hover
ImageName=#@#Base\hover_clear.png
ImageTint=#HovColor#
H=#HoneycombSize#

[Variables]
HoneycombSize=90
HovColor=255, 255, 255, 0

[Rainmeter]
Update=1000