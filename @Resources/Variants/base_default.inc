[Base]
Meter=Image
ImageName=#@#Base\base_default.png
ImageTint=#BaseColor#
LeftMouseUpAction=#Action#
H=#HoneycombSize#

[Base Overlay]
Meter=Image
ImageName=#BaseOverlay#
ImageTint=#OverlayColor#
GreyScale=#IconGreyscale#
H=#HoneycombSize#

[Hover]
MouseOverAction=[!SetVariable "HovColor" "#HoverColor#"][!UpdateMeter HoverIndicator][!Redraw]
MouseLeaveAction=[!SetVariable "HovColor" "255, 255, 255, 0"][!UpdateMeter HoverIndicator][!Redraw]
DynamicVariables=1
ImageTint=#HovColor#

[HoneycombNG]
Meter=Image
H=#HoneycombSize#
ImageName=#@#\Icons\#Type#\#Icon#.png
ImageTint=#IconColor#
GreyScale=#IconGreyscale#

[Shadow]
Meter=Image
ImageName=#@#Base\shadow.png
ImageTint=#ShadowColor#
H=#HoneycombSize#

[BaseStyle]
Meter=Image
ImageName=#@#Base\Styles\style_#BaseStyle#.png
H=#HoneycombSize#

[HoverIndicator]
Meter=Image
Meterstyle=Hover
ImageName=#@#Base\Hover\hover_#Hover#.png
ImageTint=#HovColor#
H=#HoneycombSize#

[Variables]
HovColor=255, 255, 255, 0
