[IncludeConfig]
@IncludeConfig=#@#config.inc

[Variables]
; Internal variables
Blank=#@#Base\blank.png
Mono=#@#Icons\#Type#\mono\#Icon#.png
MonoName=#@#Icons\#Type#\mono\#IconMonoName#.png
Overlay=#@#Icons\#Type#\overlay\#Icon#.png
@IncludeBase=#@#Variants\base_#Base#.inc

[Rainmeter]
Update=-1
Group=HoneycombNG
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=Edit icon
ContextAction3=["#CONFIGEDITOR#" "#CURRENTPATH#/#CURRENTFILE#"]
ContextTitle4=Edit config
ContextAction4=["#CONFIGEDITOR#" "#@#config.inc"]
ContextTitle5=Refresh HoneycombNG
ContextAction5=[!RefreshGroup HoneycombNG]
ContextTitle6=-
ContextAction6=
ContextTitle7=Open skin menu
ContextAction7=[!SkinMenu]