[Rainmeter]
Update=-1
Group=HoneycombNG
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=Edit config
ContextAction3=["#CONFIGEDITOR#" "#@#config.inc"]
ContextTitle4=Refresh HoneycombNG
ContextAction4=[!RefreshGroup HoneycombNG]
ContextTitle5=-
ContextAction5=
ContextTitle6=Open skin menu
ContextAction6=[!SkinMenu]

[IncludeConfig]
@IncludeConfig=#@#config.inc

[Variables]
; Internal variables
Blank=#@#Base\blank.png
Mono=#@#Icons\#Type#\mono\#Icon#.png
MonoName=#@#Icons\#Type#\mono\#IconMonoName#.png
Overlay=#@#Icons\#Type#\overlay\#Icon#.png
@IncludeBase=#@#Variants\base_#Base#.inc
