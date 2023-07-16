[Base]
Meter=Image
ImageName=#@#Base\base_default.png
ImageTint=#BaseColor#
LeftMouseUpAction=#Action#
H=#HoneycombSize#

[Base Overlay]
Meter=Image
ImageName=#@#\#BaseOverlay#
ImageTint=#OverlayColor#
GreyScale=#IconGreyscale#
H=#HoneycombSize#

[Hover]
MouseOverAction=[!SetVariable "HovColor" "0, 0, 0, 125"][!UpdateMeter HoverIndicator][!Redraw]
MouseLeaveAction=[!SetVariable "HovColor" "255, 255, 255, 0"][!UpdateMeter HoverIndicator][!Redraw]
DynamicVariables=1
ImageTint=#HovColor#

[HoneycombNG]
Meter=Image
H=#HoneycombSize#
ImageName=#@#\#Icon#.png
ImageTint=#IconColor#
GreyScale=#IconGreyscale#

[Shadow]
Meter=Image
ImageName=#@#Base\shadow.png
ImageTint=#ShadowColor#
H=#HoneycombSize#

[HoverIndicator]
Meter=Image
Meterstyle=Hover
ImageName=#@#Base\hover_default.png
ImageTint=#HovColor#
H=#HoneycombSize#

[Variables]
HoneycombSize=90
HovColor=255, 255, 255, 0

[Rainmeter]
Update=1000