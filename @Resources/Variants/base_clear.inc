[HoneycombNG]
Meter=Image
H=#HoneycombSize#
ImageName=#IconMono#
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
ImageName=#@#Base\Hover\hover_clear.png
ImageTint=#HovColor#
H=#HoneycombSize#

[BaseStyle]
Meter=Image
ImageName=#@#Base\Styles\style_#BaseStyle#.png
H=#HoneycombSize#

[Variables]
Icon=#@#\Icons\#Type#\#Icon#.png
HovColor=255, 255, 255, 0
