%BoundingBox: (atend)
%Pages: (atend)
%DocumentFonts: (atend)
%EndComments
%
FrameMaker PostScript Prolog 3.0, for use with FrameMaker 3.0
Copyright (c) 1986,87,89,90,91,92,93,94,95,96, by ISABEL Technology Corporation.
% All rights reserved.
%
% Known Problems:
%	Due to bugs in Transcript, the 'PS-Adobe-' is omitted from line 1
/FMversion (3.0) def 
% Set up Color vs. Black-and-White
	/FMPrintInColor systemdict /colorimage known
		systemdict /currentcolortransfer known or def
% Uncomment this line to force b&w on color printer
%   /FMPrintInColor false def
/FrameDict 195 dict def 
systemdict /errordict known not {/errordict 10 dict def
		errordict /rangecheck {stop} put} if
% The readline in 23.0 doesn't recognize cr's as nl's on AppleTalk
FrameDict /tmprangecheck errordict /rangecheck get put 
errordict /rangecheck {FrameDict /bug true put} put 
FrameDict /bug false put 
mark 
% Some PS machines read past the CR, so keep the following 3 lines together!
currentfile 5 string readline
00
0000000000
cleartomark 
errordict /rangecheck FrameDict /tmprangecheck get put 
FrameDict /bug get { 
	/readline {
		/gstring exch def
		/gfile exch def
		/gindex 0 def
		{
			gfile read pop 
			dup 10 eq {exit} if 
			dup 13 eq {exit} if 
			gstring exch gindex exch put 
			/gindex gindex 1 add def 
		} loop
		pop 
		gstring 0 gindex getinterval true 
		} def
	} if
/FMVERSION {
	FMversion ne {
		/Times-Roman findfont 18 scalefont setfont
		100 100 moveto
		(FrameMaker version does not match postscript_prolog!)
		dup =
		show showpage
		} if
	} def 
/FMLOCAL {
	FrameDict begin
	0 def 
	end 
	} def 
	/gstring FMLOCAL
	/gfile FMLOCAL
	/gindex FMLOCAL
	/orgxfer FMLOCAL
	/orgproc FMLOCAL
	/organgle FMLOCAL
	/orgfreq FMLOCAL
	/yscale FMLOCAL
	/xscale FMLOCAL
	/manualfeed FMLOCAL
	/paperheight FMLOCAL
	/paperwidth FMLOCAL
/FMDOCUMENT { 
	array /FMfonts exch def 
	/#copies exch def
	FrameDict begin
	0 ne dup {setmanualfeed} if
	/manualfeed exch def
	/paperheight exch def
	/paperwidth exch def
	/yscale exch def
	/xscale exch def
	currenttransfer cvlit /orgxfer exch def
	currentscreen cvlit /orgproc exch def
	/organgle exch def /orgfreq exch def
	setpapername 
	manualfeed {true} {papersize} ifelse 
	{manualpapersize} {false} ifelse 
	{desperatepapersize} if
	end 
	} def 
	/pagesave FMLOCAL
	/orgmatrix FMLOCAL
	/landscape FMLOCAL
/FMBEGINPAGE { 
	FrameDict begin 
	/pagesave save def
	3.86 setmiterlimit
	/landscape exch 0 ne def
	landscape { 
		90 rotate 0 exch neg translate pop 
		}
		{pop pop}
		ifelse
	xscale yscale scale
	/orgmatrix matrix def
	gsave 
	} def 
/FMENDPAGE {
	grestore 
	pagesave restore
	end 
	showpage
	} def 
/FMFONTDEFINE { 
	FrameDict begin
	findfont 
	ReEncode 
	1 index exch 
	definefont 
	FMfonts 3 1 roll 
	put
	end 
	} def 
/FMFILLS {
	FrameDict begin
	array /fillvals exch def
	end 
	} def 
/FMFILL {
	FrameDict begin
	 fillvals 3 1 roll put
	end 
	} def 
/FMNORMALIZEGRAPHICS { 
	newpath
	0.0 0.0 moveto
	1 setlinewidth
	0 setlinecap
	0 0 0 sethsbcolor
	0 setgray 
	} bind def
	/fx FMLOCAL
	/fy FMLOCAL
	/fh FMLOCAL
	/fw FMLOCAL
	/llx FMLOCAL
	/lly FMLOCAL
	/urx FMLOCAL
	/ury FMLOCAL
/FMBEGINEPSF { 
	end 
	/FMEPSF save def 
	/showpage {} def 
	FMNORMALIZEGRAPHICS 
	[/fy /fx /fh /fw /ury /urx /lly /llx] {exch def} forall 
	fx fy translate 
	rotate
	fw urx llx sub div fh ury lly sub div scale 
	llx neg lly neg translate 
	} bind def
/FMENDEPSF {
	FMEPSF restore
	FrameDict begin 
	} bind def
FrameDict begin 
/setmanualfeed {
%%BeginFeature *ManualFeed True
	 statusdict /manualfeed true put
%%EndFeature
	} def
/max {2 copy lt {exch} if pop} bind def
/min {2 copy gt {exch} if pop} bind def
/inch {72 mul} def
/pagedimen { 
	paperheight sub abs 16 lt exch 
	paperwidth sub abs 16 lt and
	{/papername exch def} {pop} ifelse
	} def
	/papersizedict FMLOCAL
/setpapername { 
	/papersizedict 14 dict def 
	papersizedict begin
	/papername /unknown def 
		/Letter 8.5 inch 11.0 inch pagedimen
		/LetterSmall 7.68 inch 10.16 inch pagedimen
		/Tabloid 11.0 inch 17.0 inch pagedimen
		/Ledger 17.0 inch 11.0 inch pagedimen
		/Legal 8.5 inch 14.0 inch pagedimen
		/Statement 5.5 inch 8.5 inch pagedimen
		/Executive 7.5 inch 10.0 inch pagedimen
		/A3 11.69 inch 16.5 inch pagedimen
		/A4 8.26 inch 11.69 inch pagedimen
		/A4Small 7.47 inch 10.85 inch pagedimen
		/B4 10.125 inch 14.33 inch pagedimen
		/B5 7.16 inch 10.125 inch pagedimen
	end
	} def
/papersize {
	papersizedict begin
		/Letter {lettertray letter} def
		/LetterSmall {lettertray lettersmall} def
		/Tabloid {11x17tray 11x17} def
		/Ledger {ledgertray ledger} def
		/Legal {legaltray legal} def
		/Statement {statementtray statement} def
		/Executive {executivetray executive} def
		/A3 {a3tray a3} def
		/A4 {a4tray a4} def
		/A4Small {a4tray a4small} def
		/B4 {b4tray b4} def
		/B5 {b5tray b5} def
		/unknown {unknown} def
	papersizedict dup papername known {papername} {/unknown} ifelse get
	end
	/FMdicttop countdictstack 1 add def 
	statusdict begin stopped end 
	countdictstack -1 FMdicttop {pop end} for 
	} def
/manualpapersize {
	papersizedict begin
		/Letter {letter} def
		/LetterSmall {lettersmall} def
		/Tabloid {11x17} def
		/Ledger {ledger} def
		/Legal {legal} def
		/Statement {statement} def
		/Executive {executive} def
		/A3 {a3} def
		/A4 {a4} def
		/A4Small {a4small} def
		/B4 {b4} def
		/B5 {b5} def
		/unknown {unknown} def
	papersizedict dup papername known {papername} {/unknown} ifelse get
	end
	stopped 
	} def
/desperatepapersize {
	statusdict /setpageparams known
		{
		paperwidth paperheight 0 1 
		statusdict begin
		{setpageparams} stopped pop 
		end
		} if
	} def
/savematrix {
	orgmatrix currentmatrix pop
	} bind def
/restorematrix {
	orgmatrix setmatrix
	} bind def
/dmatrix matrix def
/dpi    72 0 dmatrix defaultmatrix dtransform
    dup mul exch   dup mul add   sqrt def
/freq dpi 18.75 div 8 div round dup 0 eq {pop 1} if 8 mul dpi exch div def
/sangle 1 0 dmatrix defaultmatrix dtransform exch atan def
/DiacriticEncoding [
/.notdef /.notdef /.notdef /.notdef /.notdef /.notdef /.notdef
/.notdef /.notdef /.notdef /.notdef /.notdef /.notdef /.notdef
/.notdef /.notdef /.notdef /.notdef /.notdef /.notdef /.notdef
/.notdef /.notdef /.notdef /.notdef /.notdef /.notdef /.notdef
/.notdef /.notdef /.notdef /.notdef /space /exclam /quotedbl
/numbersign /dollar /percent /ampersand /quotesingle /parenleft
/parenright /asterisk /plus /comma /hyphen /period /slash /zero /one
/two /three /four /five /six /seven /eight /nine /colon /semicolon
/less /equal /greater /question /at /A /B /C /D /E /F /G /H /I /J /K
/L /M /N /O /P /Q /R /S /T /U /V /W /X /Y /Z /Ä /Ö /Ü /ß /bracketleft /backslash
/bracketright /asciicircum /underscore /grave /a /b /c /d /e /f /g /h
/i /j /k /l /m /n /o /p /q /r /s /t /u /v /w /x /y /z /ä /ö /ü /ß /braceleft /bar
/braceright /asciitilde /.notdef /Adieresis /Aring /Ccedilla /Eacute
/Ntilde /Odieresis /Udieresis /aacute /agrave /acircumflex /adieresis
/atilde /aring /ccedilla /eacute /egrave /ecircumflex /edieresis
/iacute /igrave /icircumflex /idieresis /ntilde /oacute /ograve
/ocircumflex /odieresis /otilde /uacute /ugrave /ucircumflex
/udieresis /dagger /.notdef /cent /sterling /section /bullet
/paragraph /germandbls /registered /copyright /trademark /acute
/dieresis /.notdef /AE /Oslash /.notdef /.notdef /.notdef /.notdef
/yen /.notdef /.notdef /.notdef /.notdef /.notdef /.notdef
/ordfeminine /ordmasculine /.notdef /ae /oslash /questiondown
/exclamdown /logicalnot /.notdef /florin /.notdef /.notdef
/guillemotleft /guillemotright /ellipsis /.notdef /Agrave /Atilde
/Otilde /OE /oe /endash /emdash /quotedblleft /quotedblright
/quoteleft /quoteright /.notdef /.notdef /ydieresis /Ydieresis
/fraction /currency /guilsinglleft /guilsinglright /fi /fl /daggerdbl
/periodcentered /quotesinglbase /quotedblbase /perthousand
/Acircumflex /Ecircumflex /Aacute /Edieresis /Egrave /Iacute
/Icircumflex /Idieresis /Igrave /Oacute /Ocircumflex /.notdef /Ograve
/Uacute /Ucircumflex /Ugrave /dotlessi /circumflex /tilde /macron
/breve /dotaccent /ring /cedilla /hungarumlaut /ogonek /caron
] def
/ReEncode { 
	dup 
	length 
	dict begin 
	{
	1 index /FID ne 
		{def} 
		{pop pop} ifelse 
	} forall 
	0 eq {/Encoding DiacriticEncoding def} if 
	currentdict 
	end 
	} bind def
/graymode true def
	/bwidth FMLOCAL
	/bpside FMLOCAL
	/bstring FMLOCAL
	/onbits FMLOCAL
	/offbits FMLOCAL
	/xindex FMLOCAL
	/yindex FMLOCAL
	/x FMLOCAL
	/y FMLOCAL
/setpattern {
	 /bwidth  exch def
	 /bpside  exch def
	 /bstring exch def
	 /onbits 0 def  /offbits 0 def
	 freq sangle landscape {90 add} if 
		{/y exch def
		 /x exch def
		 /xindex x 1 add 2 div bpside mul cvi def
		 /yindex y 1 add 2 div bpside mul cvi def
		 bstring yindex bwidth mul xindex 8 idiv add get
		 1 7 xindex 8 mod sub bitshift and 0 ne
		 {/onbits  onbits  1 add def 1}
		 {/offbits offbits 1 add def 0}
		 ifelse
		}
		setscreen
	 {} settransfer
	 offbits offbits onbits add div FMsetgray
	/graymode false def
	} bind def
/grayness {
	FMsetgray
	graymode not {
		/graymode true def
		orgxfer cvx settransfer
		orgfreq organgle orgproc cvx setscreen
		} if
	} bind def
	/HUE FMLOCAL
	/SAT FMLOCAL
	/BRIGHT FMLOCAL
	/Colors FMLOCAL
FMPrintInColor 
	
	{
	/HUE 0 def
	/SAT 0 def
	/BRIGHT 0 def
	% array of arrays Hue and Sat values for the separations [HUE BRIGHT]
	/Colors   
	[[0    0  ]    % black
	 [0    0  ]    % white
	 [0.00 1.0]    % red
	 [0.37 1.0]    % green
	 [0.60 1.0]    % blue
	 [0.50 1.0]    % cyan
	 [0.83 1.0]    % magenta
	 [0.16 1.0]    % comment / yellow
	 ] def
      
	/BEGINBITMAPCOLOR { 
		BITMAPCOLOR} def
	/BEGINBITMAPCOLORc { 
		BITMAPCOLORc} def
	/BEGINBITMAPTRUECOLOR { 
		BITMAPTRUECOLOR } def
	/BEGINBITMAPTRUECOLORc { 
		BITMAPTRUECOLORc } def
	/K { 
		Colors exch get dup
		0 get /HUE exch store 
		1 get /BRIGHT exch store
		  HUE 0 eq BRIGHT 0 eq and
			{1.0 SAT sub setgray}
			{HUE SAT BRIGHT sethsbcolor} 
		  ifelse
		} def
	/FMsetgray { 
		/SAT exch 1.0 exch sub store 
		  HUE 0 eq BRIGHT 0 eq and
			{1.0 SAT sub setgray}
			{HUE SAT BRIGHT sethsbcolor} 
		  ifelse
		} bind def
	}
	
	{
	/BEGINBITMAPCOLOR { 
		BITMAPGRAY} def
	/BEGINBITMAPCOLORc { 
		BITMAPGRAYc} def
	/BEGINBITMAPTRUECOLOR { 
		BITMAPTRUEGRAY } def
	/BEGINBITMAPTRUECOLORc { 
		BITMAPTRUEGRAYc } def
	/FMsetgray {setgray} bind def
	/K { 
		pop
		} def
	}
ifelse
/normalize {
	transform round exch round exch itransform
	} bind def
/dnormalize {
	dtransform round exch round exch idtransform
	} bind def
/lnormalize { 
	0 dtransform exch cvi 2 idiv 2 mul 1 add exch idtransform pop
	} bind def
/H { 
	lnormalize setlinewidth
	} bind def
/Z {
	setlinecap
	} bind def
	/fillvals FMLOCAL
/X { 
	fillvals exch get
	dup type /stringtype eq
	{8 1 setpattern} 
	{grayness}
	ifelse
	} bind def
/V { 
	gsave eofill grestore
	} bind def
/N { 
	stroke
	} bind def
/M {newpath moveto} bind def
/E {lineto} bind def
/D {curveto} bind def
/O {closepath} bind def
	/n FMLOCAL
/L { 
 	/n exch def
	newpath
	normalize
	moveto 
	2 1 n {pop normalize lineto} for
	} bind def
/Y { 
	L 
	closepath
	} bind def
	/x1 FMLOCAL
	/x2 FMLOCAL
	/y1 FMLOCAL
	/y2 FMLOCAL
	/rad FMLOCAL
/R { 
	/y2 exch def
	/x2 exch def
	/y1 exch def
	/x1 exch def
	x1 y1
	x2 y1
	x2 y2
	x1 y2
	4 Y 
	} bind def
/RR { 
	/rad exch def
	normalize
	/y2 exch def
	/x2 exch def
	normalize
	/y1 exch def
	/x1 exch def
	newpath
	x1 y1 rad add moveto
	x1 y2 x2 y2 rad arcto
	x2 y2 x2 y1 rad arcto
	x2 y1 x1 y1 rad arcto
	x1 y1 x1 y2 rad arcto
	closepath
	16 {pop} repeat
	} bind def
/C { 
	grestore
	gsave
	R 
	clip
	} bind def
	/FMpointsize FMLOCAL
/F { 
	FMfonts exch get
	FMpointsize scalefont
	setfont
	} bind def
/Q { 
	/FMpointsize exch def
	F 
	} bind def
/T { 
	moveto show
	} bind def
/RF { 
	rotate
	0 ne {-1 1 scale} if
	} bind def
/TF { 
	gsave
	moveto 
	RF
	show
	grestore
	} bind def
/P { 
	moveto
	0 32 3 2 roll widthshow
	} bind def
/PF { 
	gsave
	moveto 
	RF
	0 32 3 2 roll widthshow
	grestore
	} bind def
/S { 
	moveto
	0 exch ashow
	} bind def
/SF { 
	gsave
	moveto
	RF
	0 exch ashow
	grestore
	} bind def
/B { 
	moveto
	0 32 4 2 roll 0 exch awidthshow
	} bind def
/BF { 
	gsave
	moveto
	RF
	0 32 4 2 roll 0 exch awidthshow
	grestore
	} bind def
/G { 
	gsave
	newpath
	normalize translate 0.0 0.0 moveto 
	dnormalize scale 
	0.0 0.0 1.0 5 3 roll arc 
	closepath fill
	grestore
	} bind def
/A { 
	gsave
	savematrix
	newpath
	2 index 2 div add exch 3 index 2 div sub exch 
	normalize 2 index 2 div sub exch 3 index 2 div add exch 
	translate 
	scale 
	0.0 0.0 1.0 5 3 roll arc 
	restorematrix
	stroke
	grestore
	} bind def
	/x FMLOCAL
	/y FMLOCAL
	/w FMLOCAL
	/h FMLOCAL
	/xx FMLOCAL
	/yy FMLOCAL
	/ww FMLOCAL
	/hh FMLOCAL
	/FMsaveobject FMLOCAL
	/FMoptop FMLOCAL
	/FMdicttop FMLOCAL
/BEGINPRINTCODE { 
	/FMdicttop countdictstack 1 add def 
	/FMoptop count 4 sub def 
	/FMsaveobject save def
	userdict begin 
	/showpage {} def 
	FMNORMALIZEGRAPHICS 
	3 index neg 3 index neg translate
	} bind def
/ENDPRINTCODE {
	count -1 FMoptop {pop pop} for 
	countdictstack -1 FMdicttop {pop end} for 
	FMsaveobject restore 
	} bind def
/gn { 
	0 
	{	46 mul 
		cf read pop 
		32 sub 
		dup 46 lt {exit} if 
		46 sub add 
		} loop
	add 
	} bind def
	/str FMLOCAL
/cfs { 
	/str sl string def 
	0 1 sl 1 sub {str exch val put} for 
	str def 
	} bind def
/ic [ 
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0223
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0223
	0
	{0 hx} {1 hx} {2 hx} {3 hx} {4 hx} {5 hx} {6 hx} {7 hx} {8 hx} {9 hx}
	{10 hx} {11 hx} {12 hx} {13 hx} {14 hx} {15 hx} {16 hx} {17 hx} {18 hx}
	{19 hx} {gn hx} {0} {1} {2} {3} {4} {5} {6} {7} {8} {9} {10} {11} {12}
	{13} {14} {15} {16} {17} {18} {19} {gn} {0 wh} {1 wh} {2 wh} {3 wh}
	{4 wh} {5 wh} {6 wh} {7 wh} {8 wh} {9 wh} {10 wh} {11 wh} {12 wh}
	{13 wh} {14 wh} {gn wh} {0 bl} {1 bl} {2 bl} {3 bl} {4 bl} {5 bl} {6 bl}
	{7 bl} {8 bl} {9 bl} {10 bl} {11 bl} {12 bl} {13 bl} {14 bl} {gn bl}
	{0 fl} {1 fl} {2 fl} {3 fl} {4 fl} {5 fl} {6 fl} {7 fl} {8 fl} {9 fl}
	{10 fl} {11 fl} {12 fl} {13 fl} {14 fl} {gn fl}
	] def
	/sl FMLOCAL
	/val FMLOCAL
	/ws FMLOCAL
	/im FMLOCAL
	/bs FMLOCAL
	/cs FMLOCAL
	/len FMLOCAL
	/pos FMLOCAL
/ms { 
	/sl exch def 
	/val 255 def 
	/ws cfs 
	/im cfs 
	/val 0 def 
	/bs cfs 
	/cs cfs 
	} bind def
400 ms 
/ip { 
	is 
	0 
	cf cs readline pop 
	{	ic exch get exec 
		add 
		} forall 
	pop 
	
	} bind def
/wh { 
	/len exch def 
	/pos exch def 
	ws 0 len getinterval im pos len getinterval copy pop
	pos len 
	} bind def
/bl { 
	/len exch def 
	/pos exch def 
	bs 0 len getinterval im pos len getinterval copy pop
	pos len 
	} bind def
/s1 1 string def
/fl { 
	/len exch def 
	/pos exch def 
	/val cf s1 readhexstring pop 0 get def
	pos 1 pos len add 1 sub {im exch val put} for
	pos len 
	} bind def
/hx { 
	3 copy getinterval 
	cf exch readhexstring pop pop 
	} bind def
	/h FMLOCAL
	/w FMLOCAL
	/d FMLOCAL
	/lb FMLOCAL
	/bitmapsave FMLOCAL
	/is FMLOCAL
	/cf FMLOCAL
/wbytes { 
	dup 
	8 eq {pop} {1 eq {7 add 8 idiv} {3 add 4 idiv} ifelse} ifelse
	} bind def
/BEGINBITMAPBWc { 
	1 {} COMMONBITMAPc
	} bind def
/BEGINBITMAPGRAYc { 
	8 {} COMMONBITMAPc
	} bind def
/BEGINBITMAP2BITc { 
	2 {} COMMONBITMAPc
	} bind def
/COMMONBITMAPc { 
	/r exch def
	/d exch def
	gsave
	translate rotate scale /h exch def /w exch def
	/lb w d wbytes def 
	sl lb lt {lb ms} if 
	/bitmapsave save def 
	r                    
	/is im 0 lb getinterval def 
	ws 0 lb getinterval is copy pop 
	/cf currentfile def 
	w h d [w 0 0 h neg 0 h] 
	{ip} image 
	bitmapsave restore 
	grestore
	} bind def
/BEGINBITMAPBW { 
	1 {} COMMONBITMAP
	} bind def
/BEGINBITMAPGRAY { 
	8 {} COMMONBITMAP
	} bind def
/BEGINBITMAP2BIT { 
	2 {} COMMONBITMAP
	} bind def
/COMMONBITMAP { 
	/r exch def
	/d exch def
	gsave
	translate rotate scale /h exch def /w exch def
	/bitmapsave save def 
	r                    
	/is w d wbytes string def
	/cf currentfile def 
	w h d [w 0 0 h neg 0 h] 
	{cf is readhexstring pop} image
	bitmapsave restore 
	grestore
	} bind def
	/proc1 FMLOCAL
	/proc2 FMLOCAL
	/newproc FMLOCAL
/Fmcc {
    /proc2 exch cvlit def
    /proc1 exch cvlit def
    /newproc proc1 length proc2 length add array def
    newproc 0 proc1 putinterval
    newproc proc1 length proc2 putinterval
    newproc cvx
} bind def
/ngrayt 256 array def
/nredt 256 array def
/nbluet 256 array def
/ngreent 256 array def
	/gryt FMLOCAL
	/blut FMLOCAL
	/grnt FMLOCAL
	/redt FMLOCAL
	/indx FMLOCAL
	/cynu FMLOCAL
	/magu FMLOCAL
	/yelu FMLOCAL
	/k FMLOCAL
	/u FMLOCAL
/colorsetup {
	currentcolortransfer
	/gryt exch def
	/blut exch def
	/grnt exch def
	/redt exch def
	0 1 255 {
		/indx exch def
		/cynu 1 red indx get 255 div sub def
		/magu 1 green indx get 255 div sub def
		/yelu 1 blue indx get 255 div sub def
		/k cynu magu min yelu min def
		/u k currentundercolorremoval exec def
		nredt indx 1 0 cynu u sub max sub redt exec put
		ngreent indx 1 0 magu u sub max sub grnt exec put
		nbluet indx 1 0 yelu u sub max sub blut exec put
		ngrayt indx 1 k currentblackgeneration exec sub gryt exec put
	} for
	{255 mul cvi nredt exch get}
	{255 mul cvi ngreent exch get}
	{255 mul cvi nbluet exch get}
	{255 mul cvi ngrayt exch get}
	setcolortransfer
	{pop 0} setundercolorremoval
	{} setblackgeneration
	} bind def
	/tran FMLOCAL
/fakecolorsetup {
	/tran 256 string def
	0 1 255 {/indx exch def 
		tran indx
		red indx get 77 mul
		green indx get 151 mul
		blue indx get 28 mul
		add add 256 idiv put} for
	currenttransfer
	{255 mul cvi tran exch get 255.0 div}
	exch Fmcc settransfer
} bind def
/BITMAPCOLOR { 
	/d 8 def
	gsave
	translate rotate scale /h exch def /w exch def
	/bitmapsave save def 
	colorsetup
	/is w d wbytes string def
	/cf currentfile def 
	w h d [w 0 0 h neg 0 h] 
	{cf is readhexstring pop} {is} {is} true 3 colorimage 
	bitmapsave restore 
	grestore
	} bind def
/BITMAPCOLORc { 
	/d 8 def
	gsave
	translate rotate scale /h exch def /w exch def
	/lb w d wbytes def 
	sl lb lt {lb ms} if 
	/bitmapsave save def 
	colorsetup
	/is im 0 lb getinterval def 
	ws 0 lb getinterval is copy pop 
	/cf currentfile def 
	w h d [w 0 0 h neg 0 h] 
	{ip} {is} {is} true 3 colorimage
	bitmapsave restore 
	grestore
	} bind def
/BITMAPTRUECOLORc { 
        gsave
        translate rotate scale /h exch def /w exch def
        /bitmapsave save def 
        
        /is w string def
        
        ws 0 w getinterval is copy pop 
        /cf currentfile def 
        w h 8 [w 0 0 h neg 0 h] 
        {ip} {gip} {bip} true 3 colorimage
        bitmapsave restore 
        grestore
        } bind def
/BITMAPTRUECOLOR { 
        gsave
        translate rotate scale /h exch def /w exch def
        /bitmapsave save def 
        /is w string def
        /gis w string def
        /bis w string def
        /cf currentfile def 
        w h 8 [w 0 0 h neg 0 h] 
        { cf is readhexstring pop } 
        { cf gis readhexstring pop } 
        { cf bis readhexstring pop } 
        true 3 colorimage 
        bitmapsave restore 
        grestore
        } bind def
/BITMAPTRUEGRAYc { 
        gsave
        translate rotate scale /h exch def /w exch def
        /bitmapsave save def 
        
        /is w string def
        
        ws 0 w getinterval is copy pop 
        /cf currentfile def 
        w h 8 [w 0 0 h neg 0 h] 
        {ip gip bip w gray} image
        bitmapsave restore 
        grestore
        } bind def
/ww FMLOCAL
/r FMLOCAL
/g FMLOCAL
/b FMLOCAL
/i FMLOCAL
/gray { 
        /ww exch def
        /b exch def
        /g exch def
        /r exch def
        0 1 ww 1 sub { /i exch def r i get .299 mul g i get .587 mul
			b i get .114 mul add add r i 3 -1 roll floor cvi put } for
        r
        } bind def
/BITMAPTRUEGRAY { 
        gsave
        translate rotate scale /h exch def /w exch def
        /bitmapsave save def 
        /is w string def
        /gis w string def
        /bis w string def
        /cf currentfile def 
        w h 8 [w 0 0 h neg 0 h] 
        { cf is readhexstring pop 
          cf gis readhexstring pop 
          cf bis readhexstring pop w gray}  image
        bitmapsave restore 
        grestore
        } bind def
/BITMAPGRAY { 
	8 {fakecolorsetup} COMMONBITMAP
	} bind def
/BITMAPGRAYc { 
	8 {fakecolorsetup} COMMONBITMAPc
	} bind def
/ENDBITMAP {
	} bind def
end 
	/ALDsave FMLOCAL
	/ALDmatrix matrix def ALDmatrix currentmatrix pop
/StartALD {
	/ALDsave save def
	 savematrix
	 ALDmatrix setmatrix
	} bind def
/InALD {
	 restorematrix
	} bind def
/DoneALD {
	 ALDsave restore
	} bind def
%%EndProlog
%%BeginSetup
(3.0) FMVERSION
1 1 595.3 841.89 0 1 22 FMDOCUMENT
0 0 /Helvetica-Bold FMFONTDEFINE
1 0 /Times-Roman FMFONTDEFINE
2 0 /Times-Bold FMFONTDEFINE
3 0 /Times-BoldItalic FMFONTDEFINE
4 0 /Times-Italic FMFONTDEFINE
5 0 /Courier FMFONTDEFINE
6 0 /AvantGarde-Demi FMFONTDEFINE
7 0 /AvantGarde-BookOblique FMFONTDEFINE
8 0 /AvantGarde-DemiOblique FMFONTDEFINE
32 FMFILLS
0 0 FMFILL
1 .1 FMFILL
2 .3 FMFILL
3 .5 FMFILL
4 .7 FMFILL
5 .9 FMFILL
6 .97 FMFILL
7 1 FMFILL
8 <0f1e3c78f0e1c387> FMFILL
9 <0f87c3e1f0783c1e> FMFILL
10 <cccccccccccccccc> FMFILL
11 <ffff0000ffff0000> FMFILL
12 <8142241818244281> FMFILL
13 <03060c183060c081> FMFILL
14 <8040201008040201> FMFILL
16 1 FMFILL
17 .9 FMFILL
18 .7 FMFILL
19 .5 FMFILL
20 .3 FMFILL
21 .1 FMFILL
22 0.03 FMFILL
23 0 FMFILL
24 <f0e1c3870f1e3c78> FMFILL
25 <f0783c1e0f87c3e1> FMFILL
26 <3333333333333333> FMFILL
27 <0000ffff0000ffff> FMFILL
28 <7ebddbe7e7dbbd7e> FMFILL
29 <fcf9f3e7cf9f3f7e> FMFILL
30 <7fbfdfeff7fbfdfe> FMFILL
%%EndSetup
%%Page: "1" 1
%%BeginPaperSize: A4
%%EndPaperSize
595.3 841.89 0 FMBEGINPAGE
63.65 775.62 549.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
63.65 100.27 549.65 100.27 2 L
2 Z
N
0 10 Q
(1) 525.06 84.9 T
0 9 Q
( of) 530.61 84.9 T
0 10 Q
(8) 544.09 84.9 T
63.65 668.95 549.65 684.95 C
177.65 669.95 429.65 669.95 2 L
0.25 H
0 Z
0 X
0 K
N
-8.35 24.95 603.65 816.95 C
1 24 Q
0 X
0 K
-0.17 (W) 185.63 692.95 S
-0.17 (orld-W) 206.19 692.95 S
-0.17 (ide W) 273.52 692.95 S
-0.17 (eb Proxies) 328.72 692.95 S
2 12 Q
(Ari Luotonen, CERN) 251.85 639.95 T
63.65 603.95 549.65 619.95 C
225.65 606.95 381.65 606.95 2 L
0.25 H
0 Z
0 X
0 K
N
-8.35 24.95 603.65 816.95 C
2 12 Q
0 X
0 K
( Kevin Altis, Intel) 261.34 623.95 T
3 14 Q
(April 1994) 271.64 580.61 T
(Abstract) 63.65 435.59 T
4 10 Q
(A WWW pr) 63.65 410.26 T
(oxy server) 108.25 410.26 T
(, pr) 148.49 410.26 T
(oxy for short, pr) 162 410.26 T
(ovides access to) 226.59 410.26 T
-0.07 (the W) 63.65 398.26 P
-0.07 (eb for people on closed subnets who can only access) 85.7 398.26 P
(the Internet thr) 63.65 386.26 T
(ough a \336r) 123.8 386.26 T
(ewall machine. The hypertext) 162.3 386.26 T
(server developed at CERN, cern_httpd, is capable of run-) 63.65 374.26 T
(ning as a pr) 63.65 362.26 T
(oxy) 111.32 362.26 T
(, pr) 124.64 362.26 T
(oviding seamless external access to) 138.15 362.26 T
(HTTP) 63.65 350.26 T
(, Gopher) 86.8 350.26 T
(, W) 121.22 350.26 T
(AIS and FTP) 133.84 350.26 T
(.) 184.74 350.26 T
(cern_httpd has had gateway featur) 63.65 326.26 T
(es for a long time, but) 202.65 326.26 T
(only this spring they wer) 63.65 314.26 T
(e extended to support all the) 162.12 314.26 T
(methods in the HTTP pr) 63.65 302.26 T
(otocol used by WWW clients. Cli-) 159.9 302.26 T
-0.1 (ents don\325) 63.65 290.26 P
-0.1 (t lose any functionality by going thr) 99.37 290.26 P
-0.1 (ough a pr) 241.12 290.26 P
-0.1 (oxy) 279.43 290.26 P
-0.1 (,) 292.75 290.26 P
(except special pr) 63.65 278.26 T
(ocessing they may have done for non-) 131.01 278.26 T
(native W) 63.65 266.26 T
(eb pr) 97.98 266.26 T
(otocols such as Gopher and FTP) 118.43 266.26 T
(.) 249.01 266.26 T
(A brand new featur) 63.65 242.26 T
(e is caching performed by the pr) 140.74 242.26 T
(oxy) 270.28 242.26 T
(,) 283.6 242.26 T
-0.23 (r) 63.65 230.26 P
-0.23 (esulting in shorter r) 67.17 230.26 P
-0.23 (esponse times after the \336rst document) 145.8 230.26 P
-0.19 (fetch. This makes pr) 63.65 218.26 P
-0.19 (oxies useful even to the people who do) 143.2 218.26 P
(have full Internet access and don\325) 63.65 206.26 T
(t r) 198.28 206.26 T
(eally need the pr) 207.07 206.26 T
(oxy) 273.6 206.26 T
(just to get out of their local subnet.) 63.65 194.26 T
(This paper gives an overview of pr) 63.65 170.26 T
(oxies and r) 202.09 170.26 T
(eports their) 246.13 170.26 T
(curr) 63.65 158.26 T
(ent status.) 80.49 158.26 T
0 12 Q
(1.0) 315.65 436.92 T
(Introduction) 342.65 436.92 T
1 10 Q
(The primary use of proxies is to allow access to the W) 315.65 412.26 T
(eb) 532.19 412.26 T
-0.07 (from within a \336rewall) 315.65 400.26 P
4 F
-0.07 (\050Fig. 1\051.) 405.31 400.26 P
1 F
-0.07 ( A proxy is a special HTTP) 438.27 400.26 P
([HTTP] server that typically runs on a \336rewall machine.) 315.65 388.26 T
(The proxy waits for a request from inside the \336rewall, for-) 315.65 376.26 T
-0.22 (wards the request to the remote server outside the \336rewall,) 315.65 364.26 P
(reads the response and then sends it back to the client.) 315.65 352.26 T
(In the usual case, the same proxy is used by all the clients) 315.65 328.26 T
-0.28 (within a given subnet. This makes it possible for the proxy) 315.65 316.26 P
(to do ef) 315.65 304.26 T
(\336cient caching of documents that are requested by) 346.01 304.26 T
(a number of clients.) 315.65 292.26 T
(The ability to cache documents also makes proxies attrac-) 315.65 268.26 T
-0.37 (tive to those not inside a \336rewall. Setting up a proxy server) 315.65 256.26 P
-0.13 (is easy) 315.65 244.26 P
-0.13 (, and the most popular W) 341.8 244.26 P
-0.13 (eb client programs already) 441.38 244.26 P
-0.3 (have proxy support built in. So, it is simple to con\336gure an) 315.65 232.26 P
-0.03 (entire work group to use a caching proxy server) 315.65 220.26 P
-0.03 (. This cuts) 505.86 220.26 P
(down on network traf) 315.65 208.26 T
(\336c costs since many of the docu-) 401.8 208.26 T
(ments are retrieved from a local cache once the initial) 315.65 196.26 T
(request has been made.) 315.65 184.26 T
(Current proxy methodology is based on the earlier gate-) 315.65 160.26 T
-0.05 (way code written by T) 315.65 148.26 P
-0.05 (im Berners-Lee as part of) 405.02 148.26 P
5 F
-0.13 (libwww) 509.38 148.26 P
1 F
-0.05 (,) 544.71 148.26 P
(the WWW Common Library [LIBWWW]. Kevin Altis,) 315.65 136.26 T
FMENDPAGE
%%EndPage: "1" 2
%%Page: "2" 2
595.3 841.89 0 FMBEGINPAGE
45.65 775.62 531.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(Introduction) 45.65 764.8 T
45.65 751.93 531.65 751.93 2 L
0.25 H
N
45.65 100.27 531.65 100.27 2 L
2 H
2 Z
N
0 10 Q
(2) 45.65 84.9 T
0 9 Q
( of) 51.21 84.9 T
0 10 Q
( 8) 62.19 84.9 T
0 9 Q
(W) 425.69 84.9 T
(orld-W) 434.01 84.9 T
(ide W) 462.39 84.9 T
(eb Proxies) 486.19 84.9 T
1 10 Q
(Ari Luotonen and Lou Montulli have been the principle) 45.65 450.28 T
(designers behind the proxy standard.) 45.65 438.28 T
(Lou Montulli, author of L) 45.65 414.28 T
(ynx [L) 148.65 414.28 T
(YNX], made the \336rst) 174.58 414.28 T
5 F
(libwww) 45.65 402.28 T
1 F
( changes to support proxying in collaboration) 81.63 402.28 T
(with Kevin Altis. Ari Luotonen maintains the CERN) 45.65 390.28 T
5 F
(httpd) 45.65 378.28 T
1 F
( [CERN-HTTPD]. Ari has made the server side of) 75.64 378.28 T
-0.36 (the proxy standard a reality and integrated caching into the) 45.65 366.28 P
(proxy server) 45.65 354.28 T
0 F
(1.1) 45.65 322.28 T
( Why an application level proxy?) 72.65 322.28 T
1 F
(An application-level proxy makes a \336rewall safely perme-) 45.65 299.28 T
(able for users in an or) 45.65 287.28 T
(ganization, without creating a poten-) 132.34 287.28 T
(tial security hole through which \322bad guys\323 can get into) 45.65 275.28 T
(the or) 45.65 263.28 T
(ganizations\325 net.) 68.51 263.28 T
(For W) 45.65 239.28 T
(eb clients, the modi\336cations needed to support) 70.67 239.28 T
(application-level proxying are minor \050as an example, it) 45.65 227.28 T
-0.15 (took only \336ve minutes to add proxy support for the Emacs) 45.65 215.28 P
(W) 45.65 203.28 T
(eb browser [EMACS-WWW]\051.) 54.29 203.28 T
(There is no need to compile special versions of W) 45.65 179.28 T
(eb cli-) 244.98 179.28 T
-0.12 (ents with \336rewall libraries, the standard out-of-the-box cli-) 45.65 167.28 P
(ent can be con\336gured to be a proxy client. In other words,) 45.65 155.28 T
(proxying is a standard method for getting through \336re-) 45.65 143.28 T
(walls, rather than having each client get customized to) 45.65 131.28 T
(support a special \336rewall product or method. This is espe-) 45.65 119.28 T
45.65 456.95 531.65 708.95 C
143.32 589.6 126.02 594.56 143.32 599.52 141.52 594.56 4 Y
0 X
0 K
V
154.08 599.52 171.38 594.56 154.08 589.6 155.88 594.56 4 Y
V
141.52 594.56 155.88 594.56 2 L
2 H
0 Z
N
260.6 624.99 243.64 618.95 254.82 633.06 256.24 627.98 4 Y
V
296.16 662.22 313.11 668.27 301.94 654.16 300.52 659.24 4 Y
V
256.25 627.97 300.53 659.24 2 L
N
258.66 603.38 241.24 607.9 258.41 613.3 256.73 608.3 4 Y
V
295.7 614.25 313.12 609.73 295.95 604.33 297.63 609.34 4 Y
V
256.73 608.29 297.63 609.34 2 L
N
254.32 559.46 243.65 573.95 260.38 567.32 255.92 564.49 4 Y
V
302.44 535.34 313.12 520.85 296.38 527.48 300.84 530.31 4 Y
V
255.93 564.49 300.85 530.31 2 L
N
239.83 549.28 233.74 566.22 247.88 555.08 242.8 553.65 4 Y
V
255.99 543.47 262.09 526.53 247.94 537.66 253.02 539.1 4 Y
V
242.81 553.64 253.03 539.09 2 L
N
259.95 575.3 243.65 582.95 261.52 585.1 258.95 580.49 4 Y
V
296.83 579.52 313.12 571.88 295.25 569.73 297.82 574.34 4 Y
V
258.95 580.49 297.82 574.34 2 L
N
313.12 656.93 358.48 690.95 R
3 X
V
2 Z
0 X
N
63.65 528.95 216.65 656.93 18 RR
4 H
0 Z
1 X
N
6 10 Q
0 X
(HTTP) 137.36 602.56 T
(HTTP) 260.14 647.7 T
(FTP) 272 613.68 T
(Gopher) 263.79 584.56 T
(W) 274.49 554.16 T
(AIS) 282.54 554.16 T
(NTTP) 224.23 535.05 T
318.8 651.26 364.15 685.28 R
3 X
V
2 H
2 Z
0 X
N
313.76 605.9 359.11 639.92 R
13 X
V
0 X
N
313.76 554.24 359.11 588.26 R
14 X
V
0 X
N
324.65 645.95 369.83 679.61 R
7 X
V
0 X
N
(Remote) 328.55 667.09 T
(HTTP) 336.85 659.53 T
(servers) 330.45 651.97 T
318.8 603.26 363.35 634.88 R
13 X
V
0 X
N
323.45 595.56 368.81 629.58 R
7 X
V
0 X
N
244.08 493.51 290.45 526.52 R
7 X
V
0 X
N
313.12 503.84 358.48 537.86 R
12 X
V
0 X
N
(Remote) 327.44 620.35 T
(FTP) 338.83 609.5 T
(servers) 329.34 601.94 T
318.8 549.2 364.15 583.22 R
14 X
V
0 X
N
324.46 543.53 369.83 577.55 R
7 X
V
0 X
N
(Remote) 328.46 565.04 T
(Gopher) 328.66 557.47 T
(servers) 330.36 549.92 T
318.8 498.17 364.15 532.19 R
12 X
V
0 X
N
323.45 493.51 368.81 527.53 R
7 X
V
0 X
N
(W) 334.4 514.01 T
(AIS) 342.46 514.01 T
(servers) 329.34 506.45 T
(Network) 247.68 514.01 T
(News) 254.67 506.45 T
(server) 253.17 498.89 T
76.83 577.55 114.68 628.58 R
5 X
V
0 X
N
82.5 572.88 122.19 623.91 R
5 X
V
0 X
N
87.95 568.43 127.64 619.46 R
7 X
V
0 X
N
(Clients) 92.86 604.72 T
(inside) 93.7 597.16 T
(the) 100.1 589.6 T
(\336r) 90.75 582.04 T
(ewall) 99.06 582.04 T
168.95 566.21 243.65 617.24 R
7 X
V
0 X
N
(Pr) 177.11 604.72 T
(oxy server) 185.72 604.72 T
(on the) 191.01 597.16 T
7 F
(Secur) 71.75 635.38 T
(e subnet inside \336r) 98.74 635.38 T
(ewall) 181.44 635.38 T
6 F
( \336r) 187.85 588.16 T
(ewall) 198.96 588.16 T
(machine) 184.71 579.67 T
396.65 492.95 513.65 690.95 R
7 X
V
3 12 Q
0 X
(Figure 1.) 396.65 682.95 T
4 11 Q
(Overall setup of a pr) 396.65 669.61 T
(oxy) 487.79 669.61 T
(.) 502.44 669.61 T
(Pr) 396.65 656.61 T
(oxy server is running) 407.23 656.61 T
-0.47 (either on a \336r) 396.65 643.61 P
-0.47 (ewall host or) 454.94 643.61 P
(other internal host which) 396.65 630.61 T
-0.4 (has full internet access, or) 396.65 617.61 P
(on a machine inside the) 396.65 604.61 T
(\336r) 396.65 591.61 T
(ewall making connec-) 406.01 591.61 T
(tions to the outside world) 396.65 578.61 T
(thr) 396.65 565.61 T
(ough SOCKS or other) 409.07 565.61 T
(\336r) 396.65 552.61 T
(ewall softwar) 406.01 552.61 T
(e.) 465.13 552.61 T
-8.35 24.95 603.65 816.95 C
1 10 Q
0 X
0 K
(cially important for commercial W) 297.65 450.28 T
(eb clients, where the) 436.2 450.28 T
(source code is not available for modi\336cation.) 297.65 438.28 T
-0.29 (Users don\325) 297.65 414.28 P
-0.29 (t have to have separate, specially modi\336ed FTP) 340.76 414.28 P
-0.29 (,) 526.94 414.28 P
(Gopher and W) 297.65 402.28 T
(AIS clients to get through a \336rewall \321 a) 355.38 402.28 T
(single W) 297.65 390.28 T
(eb client with a proxy server handles all of these) 332.66 390.28 T
(cases. The proxy also standardizes the appearance of FTP) 297.65 378.28 T
(and Gopher listings across clients rather than each client) 297.65 366.28 T
(having its own special handling.) 297.65 354.28 T
(A proxy allows client writers to for) 297.65 330.28 T
(get about the tens of) 438.48 330.28 T
(thousands of lines of networking code necessary to sup-) 297.65 318.28 T
-0.1 (port every protocol and concentrate on more important cli-) 297.65 306.28 P
-0.42 (ent issues \321 it\325) 297.65 294.28 P
-0.42 (s possible to have \322lightweight\323 clients that) 358.31 294.28 P
(only understand HTTP \050no native FTP [FTP], Gopher) 297.65 282.28 T
([GOPHER], etc. protocol support\051 \321 other protocols are) 297.65 270.28 T
(transparently handled by the proxy) 297.65 258.28 T
(. By using HTTP) 436.35 258.28 T
(between the client and proxy) 297.65 246.28 T
(, no protocol functionality is) 412.47 246.28 T
-0.38 (lost, since FTP) 297.65 234.28 P
-0.38 (, Gopher) 355.48 234.28 P
-0.38 (, and other W) 389.67 234.28 P
-0.38 (eb protocols map well) 442.12 234.28 P
(into HTTP methods.) 297.65 222.28 T
-0.25 (Clients without DNS \050Domain Name Service\051 can still use) 297.65 198.28 P
-0.46 (the W) 297.65 186.28 P
-0.46 (eb. The proxy IP address is the only information they) 320.54 186.28 P
(need. Or) 297.65 174.28 T
(ganizations using private network address spaces) 331.88 174.28 T
-0.19 (such as the class A net 10.*.*.* can still use the Internet as) 297.65 162.28 P
(long as the proxy is visible to both the private internal net) 297.65 150.28 T
(and the Internet, most likely via two separate network) 297.65 138.28 T
(interfaces.) 297.65 126.28 T
FMENDPAGE
%%EndPage: "2" 3
%%Page: "3" 3
595.3 841.89 0 FMBEGINPAGE
63.65 775.62 549.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(T) 476.89 764.8 T
(echnical Details) 481.72 764.8 T
63.65 751.93 549.65 751.93 2 L
0.25 H
N
63.65 100.27 549.65 100.27 2 L
2 H
2 Z
N
(W) 63.65 84.9 T
(orld-W) 71.97 84.9 T
(ide W) 100.35 84.9 T
(eb Proxies) 124.15 84.9 T
0 10 Q
(3) 525.06 84.9 T
0 9 Q
( of) 530.61 84.9 T
0 10 Q
(8) 544.09 84.9 T
1 F
(Proxying allows for high level logging of client transac-) 63.65 702.28 T
(tions, including client IP address, date and time, URL) 63.65 690.28 T
([URL], byte count, and success code. Any regular \336elds) 63.65 678.28 T
(and meta-information \336elds in an HTTP transaction are) 63.65 666.28 T
-0.34 (candidates for logging. This is not possible with logging at) 63.65 654.28 P
(the IP or TCP level.) 63.65 642.28 T
-0.4 (It is also possible to do \336ltering of client transactions at the) 63.65 618.28 P
-0.28 (application protocol level. The proxy can control access to) 63.65 606.28 P
(services for individual methods, host and domain, etc.) 63.65 594.28 T
(Application-level proxy facilitates caching at the proxy) 63.65 570.28 T
(.) 283.95 570.28 T
-0.38 (Caching is more ef) 63.65 558.28 P
-0.38 (fective on the proxy server than on each) 138.09 558.28 P
(client. This saves disk space since only a single copy is) 63.65 546.28 T
(cached, and also allows for more ef) 63.65 534.28 T
(\336cient caching of doc-) 205.29 534.28 T
(uments that are often referenced by multiple clients as the) 63.65 522.28 T
(cache manager can predict which documents are worth) 63.65 510.28 T
(caching for a long time and which are not. A caching) 63.65 498.28 T
-0.08 (server would be able to use \322look ahead\323 and other predic-) 63.65 486.28 P
(tive algorithms more ef) 63.65 474.28 T
(fectively because it has many cli-) 157.02 474.28 T
-0.08 (ents and therefore a lar) 63.65 462.28 P
-0.08 (ger sample size to base its statistics) 154.72 462.28 P
(on.) 63.65 450.28 T
(Caching also makes it possible to browse the W) 63.65 426.28 T
(eb when) 254.4 426.28 T
(some WWW server somewhere, or even the external net-) 63.65 414.28 T
(work, is down, as long as one can connect to the cache) 63.65 402.28 T
(server) 63.65 390.28 T
(. This adds a degree of quality of service to remote) 87.52 390.28 T
(network resources such as busy FTP sites and transient) 63.65 378.28 T
(Gopher servers which are often unavailable remotely) 63.65 366.28 T
(, but) 275.05 366.28 T
(may be cached locally) 63.65 354.28 T
(. Also, one might construct a cache) 152.09 354.28 T
-0.13 (that can be used to give a demo somewhere with a slow or) 63.65 342.28 P
(non-existent Internet connection. Or one can just load a) 63.65 330.28 T
-0.08 (mass of documents to the cache, unplug the machine, take) 63.65 318.28 P
(it to the cafeteria and read the documents there.) 63.65 306.28 T
-0.08 (In general, W) 63.65 282.28 P
-0.08 (eb clients\325 authors have no reason to use \336re-) 117.35 282.28 P
(wall versions of their code. In the case of the application) 63.65 270.28 T
(level proxy) 63.65 258.28 T
(, they have an incentive, since the proxy pro-) 108.25 258.28 T
(vides caching. Developers should always use their own) 63.65 246.28 T
(products, which they often weren\325) 63.65 234.28 T
(t with \336rewall solutions) 200.31 234.28 T
(such as SOCKS. In addition, the proxy is simpler to con-) 63.65 222.28 T
(\336gure than SOCKS, and it works across all platforms, not) 63.65 210.28 T
(just Unix.) 63.65 198.28 T
0 12 Q
(2.0) 315.65 421.95 T
(T) 342.65 421.95 T
(echnical Details) 349.09 421.95 T
1 10 Q
(When a normal HTTP request is made by a client, the) 315.65 397.28 T
(HTTP server gets only the) 315.65 385.28 T
4 F
(path and keywor) 423.63 385.28 T
(d portion) 489.89 385.28 T
1 F
(of) 529.31 385.28 T
(the requested URL) 315.65 373.28 T
4 F
(\050Fig. 2\051) 393.65 373.28 T
1 F
(; other parts, namely the proto-) 424.18 373.28 T
(col speci\336er \322) 315.65 361.28 T
5 F
(http:) 371.16 361.28 T
1 F
(\323 and the hostname are obviously) 401.14 361.28 T
(clear to the remote HTTP server \321 it knows that it is an) 315.65 349.28 T
(HTTP server) 315.65 337.28 T
(, and it knows the host machine that it is run-) 367.15 337.28 T
(ning on. The requested path speci\336es the document or a) 315.65 325.28 T
(CGI [CGI] script on the local \336lesystem of the server) 315.65 313.28 T
(, or) 528.16 313.28 T
(some other resource available from that server) 315.65 301.28 T
(.) 500.5 301.28 T
(When a client sends a request to a proxy server the situa-) 315.65 277.28 T
(tion is slightly dif) 315.65 265.28 T
(ferent.) 386.28 265.28 T
4 F
(The client always uses HTTP) 414.59 265.28 T
1 F
( for) 531.19 265.28 T
(transactions with the proxy server) 315.65 253.28 T
(, even when accessing a) 450.71 253.28 T
-0.27 (resource served by a remote server using another protocol,) 315.65 241.28 P
(like Gopher or FTP) 315.65 229.28 T
(.) 392.55 229.28 T
(However) 315.65 205.28 T
(, instead of specifying only the pathname and) 351.88 205.28 T
-0.29 (possibly search keywords to the proxy server) 315.65 193.28 P
-0.29 (,) 493.91 193.28 P
4 F
-0.29 (the full URL) 498.61 193.28 P
(is speci\336ed) 315.65 181.28 T
(\050Fig. 3 and 4\051) 362.29 181.28 T
1 F
(. This way the proxy server has) 417.81 181.28 T
-0.14 (all the information necessary to make the actual request to) 315.65 169.28 P
(the remote server speci\336ed in the request URL, using the) 315.65 157.28 T
(protocol speci\336ed in the URL.) 315.65 145.28 T
315.65 429.95 567.65 708.95 C
381.64 622.98 364.34 627.95 381.64 632.91 379.84 627.95 4 Y
0 X
0 K
V
379.84 627.95 495.65 627.95 2 L
2 H
2 Z
N
482.48 658.73 499.84 653.99 482.6 648.8 484.34 653.79 4 Y
V
364.34 652.25 484.35 653.79 2 L
N
6 10 Q
(HTTP) 405.65 638.56 T
516.85 594.31 545.2 571.63 2 L
0.5 H
N
522.52 622.66 516.85 611.32 2 L
N
511.18 594.31 516.85 577.3 2 L
N
505.51 594.31 488.5 571.63 2 L
N
(W) 505.51 598.81 T
(eb) 514.01 598.81 T
7 9 Q
(Remote HTTP) 482.83 547.79 T
6 F
(GET /path/doc.html HTTP/1.0) 366.67 670.92 T
(HTTP/1.0 200 Document follows) 351.65 603.3 T
(...) 351.65 593.61 T
6 10 Q
(doc.html) 505.51 564.79 T
7 9 Q
(some.host) 499.84 661.19 T
(server\325s \336lesystem) 482.83 540.23 T
324.65 616.44 364.34 667.46 R
7 X
V
2 H
0 X
N
6 10 Q
(Client) 330.5 654.95 T
499.84 622.66 545.2 656.68 R
7 X
V
0 X
N
(HTTP) 512.13 644.16 T
(server) 507.93 636.6 T
324.65 447.95 549.65 537.95 R
7 X
V
3 12 Q
0 X
(Figure 2.) 324.65 529.95 T
4 11 Q
(A normal HTTP transaction.) 324.65 516.61 T
(Client makes a r) 324.65 503.61 T
(equest to the HTTP server and) 396.57 503.61 T
(speci\336es the r) 324.65 490.61 T
(equested r) 384.66 490.61 T
(esour) 429.71 490.61 T
(ce r) 453.72 490.61 T
(elative to that) 470.09 490.61 T
(server \050no pr) 324.65 477.61 T
(otocol or hostname speci\336er in the) 381.61 477.61 T
(URL\051.) 324.65 464.61 T
-8.35 24.95 603.65 816.95 C
FMENDPAGE
%%EndPage: "3" 4
%%Page: "4" 4
595.3 841.89 0 FMBEGINPAGE
45.65 775.62 531.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(T) 45.65 764.8 T
(echnical Details) 50.48 764.8 T
45.65 751.93 531.65 751.93 2 L
0.25 H
N
45.65 100.27 531.65 100.27 2 L
2 H
2 Z
N
0 10 Q
(4) 45.65 84.9 T
0 9 Q
( of) 51.21 84.9 T
0 10 Q
( 8) 62.19 84.9 T
0 9 Q
(W) 425.69 84.9 T
(orld-W) 434.01 84.9 T
(ide W) 462.39 84.9 T
(eb Proxies) 486.19 84.9 T
1 10 Q
(From this point on the proxy server acts like a client to) 45.65 504.28 T
-0.42 (retrieve the document; it calls the same protocol module of) 45.65 492.28 P
5 F
-0.91 (libwww) 45.65 480.28 P
1 F
-0.38 ( that the client would call to perform the retrieval.) 81.63 480.28 P
(However) 45.65 468.28 T
(, the \322presentation\323 on the proxy actually means) 81.88 468.28 T
(the creation of an HTTP reply containing the requested) 45.65 456.28 T
(document to the client. For example, a Gopher or FTP) 45.65 444.28 T
(directory listing is returned as an HTML document.) 45.65 432.28 T
0 F
(2.1) 45.65 400.28 T
( Client Side Issues) 72.65 400.28 T
1 F
(Most WWW clients are built on top of) 45.65 377.28 T
5 F
(libwww) 202.22 377.28 T
1 F
(, the) 237.55 377.28 T
(WWW Common Library) 45.65 365.28 T
(, which handles the dif) 145.49 365.28 T
(ferent) 236.08 365.28 T
-0.01 (communication protocols used in the W) 45.65 353.28 P
-0.01 (eb, namely HTTP) 204.44 353.28 P
-0.01 (,) 274.66 353.28 P
(FTP) 45.65 341.28 T
(, Gopher) 61.76 341.28 T
(, News [NTTP] and W) 96.33 341.28 T
(AIS [W) 185.99 341.28 T
(AIS].) 216.24 341.28 T
(The entire proxy support is handled automatically for cli-) 45.65 317.28 T
-0.32 (ents using the) 45.65 305.28 P
5 F
-0.76 (libwww) 102.17 305.28 P
1 F
-0.32 (. Environment variables are used to) 137.5 305.28 P
(control the library) 45.65 293.28 T
(. There is an individual environment) 117.17 293.28 T
(variable for each access protocol; e.g.) 45.65 281.28 T
5 F
(http_proxy) 198.85 281.28 T
1 F
(,) 258.17 281.28 T
5 F
(ftp_proxy) 45.65 269.28 T
1 F
(,) 98.97 269.28 T
5 F
(gopher_proxy) 103.97 269.28 T
1 F
( and) 175.93 269.28 T
5 F
(wais_proxy) 195.36 269.28 T
1 F
(.) 254.68 269.28 T
(These variables are set to the URL pointing to the proxy) 45.65 257.28 T
(server that is supposed to serve requests of that protocol,) 45.65 245.28 T
(e.g.) 45.65 233.28 T
5 9 Q
(ftp_proxy=http://www_proxy.domain:911/) 59.4 215.95 T
(export ftp_proxy) 59.4 199.7 T
1 10 Q
(Usually the proxy server is the same for all the protocols,) 45.65 176.79 T
(but does not have to be.) 45.65 164.79 T
-0.17 (When the environment variable for a given protocol is set,) 45.65 140.79 P
(the) 45.65 128.79 T
5 F
(libwww) 60.36 128.79 T
1 F
( code causes a connection to always be made) 96.34 128.79 T
45.65 510.95 540.65 708.95 C
193.92 662.03 211.22 657.06 193.92 652.1 195.72 657.06 4 Y
0 X
0 K
V
88.37 657.06 195.72 657.06 2 L
2 H
2 Z
N
269.95 622.85 252.65 627.82 269.95 632.78 268.15 627.82 4 Y
V
268.15 627.82 339.92 627.82 2 L
3 X
V
0 X
N
369.65 594.3 378.65 564.95 2 L
0.5 H
N
363.13 618.24 365.97 606.9 2 L
N
364.93 594.57 351.65 564.95 2 L
N
360.65 594.3 336.13 567.83 2 L
N
6 10 Q
(W) 357.16 595.92 T
(eb) 365.66 595.92 T
(doc.html) 333.65 557.79 T
323.15 654.38 340.45 649.42 323.15 644.46 324.96 649.42 4 Y
V
252.58 649.42 324.96 649.42 2 L
2 H
N
(HTTP) 285.65 634.26 T
6 8 Q
(GET /path/doc.html HTTP/1.0) 259.95 663.35 T
(HTTP/1.0 20) 234.65 602.42 T
(0 Document follows) 277.35 602.42 T
105.68 611.15 88.37 616.11 105.68 621.08 103.87 616.11 4 Y
V
103.87 616.11 211.22 616.11 2 L
N
(HTTP/1.0 200 Document follows) 90.65 602.42 T
7 10 Q
(http_pr) 51.32 562.66 T
(oxy=http://www_pr) 85.79 562.66 T
(oxy.my.domain/) 179.44 562.66 T
(http://some.host/path/doc.html) 51.32 575.56 T
6 F
(HTTP) 138.25 633.53 T
53.1 610.27 88.2 662.91 R
7 X
V
0 X
N
(Client) 56.66 645.6 T
210.68 612.3 252.29 662.91 R
7 X
V
0 X
N
(Pr) 218.29 644.01 T
(oxy) 226.9 644.01 T
(server) 216.9 634.91 T
339.74 618.95 380.69 655.09 R
7 X
V
0 X
N
(HTTP) 349.82 638.35 T
(server) 345.62 630.55 T
7 9 Q
(www_pr) 189.65 684.3 T
(oxy.my.domain) 225.35 684.3 T
(so) 342.65 675.3 T
(me.host) 352.03 675.3 T
6 8 Q
(GET http://some.host/path/doc.html HTTP/1.0) 79.15 669.4 T
(...) 90.65 593.42 T
(...) 236.94 593.42 T
414.65 510.95 531.65 699.95 R
7 X
V
3 12 Q
0 X
(Figure 3.) 414.65 691.95 T
4 11 Q
(A pr) 414.65 678.61 T
(oxied HTTP transac-) 433.47 678.61 T
(tion.) 414.65 665.61 T
(Client makes a r) 414.65 652.61 T
(equest to) 486.57 652.61 T
(the pr) 414.65 639.61 T
(oxy server using) 440.18 639.61 T
(HTTP) 414.65 626.61 T
(, but specifying the) 440.1 626.61 T
-0.26 (full URL; the pr) 414.65 613.61 P
-0.26 (oxy server) 483.97 613.61 P
(connects to the r) 414.65 600.61 T
(emote) 487.17 600.61 T
(server and r) 414.65 587.61 T
(equests the) 467.95 587.61 T
(r) 414.65 574.61 T
(esour) 418.52 574.61 T
(ce r) 442.52 574.61 T
(elative to that) 458.89 574.61 T
(server \050no pr) 414.65 561.61 T
(otocol or) 471.61 561.61 T
(hostname speci\336er in the) 414.65 548.61 T
(URL\051.) 414.65 535.61 T
-8.35 24.95 603.65 816.95 C
1 10 Q
0 X
0 K
-0.43 (to the proxy rather than directly to the remote server) 297.65 504.28 P
-0.43 (. Some) 502.25 504.28 P
(clients also provide additional means of con\336guring the) 297.65 492.28 T
(client to use a proxy server \050e.g. Mosaic for X [MOSAIC-) 297.65 480.28 T
(X] can use X resources and Mosaic for W) 297.65 468.28 T
(indows) 464.88 468.28 T
([MOSAIC-WIN] uses settings in its initialization \336le\051.) 297.65 456.28 T
(The latest \050as of April 1994\051) 297.65 432.28 T
5 F
(libwww) 413.68 432.28 T
1 F
( \050version 2.15\051 also) 449.66 432.28 T
(supports an exception list so clients don\325) 297.65 420.28 T
(t have to always) 460.15 420.28 T
-0.27 (go through the proxy) 297.65 408.28 P
-0.27 (. This is useful for avoiding the proxy) 380.3 408.28 P
(for local servers where the clients can make a direct con-) 297.65 396.28 T
(nection.) 297.65 384.28 T
(Another dif) 297.65 360.28 T
(ference in the protocol between the client and) 343.83 360.28 T
(the proxy is that the requested URL has to be) 297.65 348.28 T
4 F
(a full URL) 480.86 348.28 T
1 F
(when it is requested from the proxy server) 297.65 336.28 T
(. These are the) 466.14 336.28 T
(only dif) 297.65 324.28 T
(ferences between a normal and proxied HTTP) 328.85 324.28 T
(transaction. The simplicity of proxy support in a W) 297.65 312.28 T
(eb cli-) 502 312.28 T
-0.02 (ent means that even clients not based on) 297.65 300.28 P
5 F
-0.04 (libwww) 460.74 300.28 P
1 F
-0.02 ( can eas-) 496.72 300.28 P
(ily support the proxy) 297.65 288.28 T
(.) 380.57 288.28 T
(Proxy support is implemented only for HTTP/1.0 on the) 297.65 264.28 T
(server side so clients must use that protocol. This is not a) 297.65 252.28 T
(problem because) 297.65 240.28 T
5 F
(libwww) 367.59 240.28 T
1 F
( does this automatically) 403.57 240.28 T
(, and) 497.59 240.28 T
(most clients \050if not all\051 have already been upgraded to use) 297.65 228.28 T
(HTTP/1.0.) 297.65 216.28 T
FMENDPAGE
%%EndPage: "4" 5
%%Page: "5" 5
595.3 841.89 0 FMBEGINPAGE
45.65 775.62 531.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(T) 458.89 764.8 T
(echnical Details) 463.72 764.8 T
45.65 751.93 531.65 751.93 2 L
0.25 H
N
45.65 100.27 531.65 100.27 2 L
2 H
2 Z
N
(W) 45.65 84.24 T
(orld-W) 53.97 84.24 T
(ide W) 82.35 84.24 T
(eb Proxies) 106.15 84.24 T
0 10 Q
(5) 507.06 84.24 T
0 9 Q
( of) 512.61 84.24 T
0 10 Q
(8) 526.09 84.24 T
(2.2) 45.65 486.28 T
( Server Side Issues) 72.65 486.28 T
1 F
-0.02 (The proxy server has to be able to act as both a server and) 45.65 463.28 P
-0.12 (a client. It is a server when accepting HTTP requests from) 45.65 451.28 P
(clients connecting to it, but it acts like a client to the) 45.65 439.28 T
(remote servers that it connects to in order to actually) 45.65 427.28 T
(retrieve the documents for its own clients. The header) 45.65 415.28 T
-0 (\336elds passed to the proxy from the client are used without) 45.65 403.28 P
-0.37 (modi\336cation when the proxy connects to the remote server) 45.65 391.28 P
(so that the client does not lose any functionality when) 45.65 379.28 T
(going through a proxy) 45.65 367.28 T
(.) 134.11 367.28 T
(A complete proxy server should speak all the W) 45.65 343.28 T
(eb proto-) 237.49 343.28 T
(cols, the most important ones being HTTP) 45.65 331.28 T
(, FTP) 214.17 331.28 T
(, Gopher) 235.28 331.28 T
(,) 269.85 331.28 T
(W) 45.65 319.28 T
(AIS and NNTP) 53.98 319.28 T
(. Proxies that only handle a single Inter-) 114.49 319.28 T
-0.39 (net protocol such as HTTP are also a possibility) 45.65 307.28 P
-0.39 (, but a W) 233.43 307.28 P
-0.39 (eb) 268.11 307.28 P
(client would then require access to other proxy servers to) 45.65 295.28 T
(handle the remaining protocols.) 45.65 283.28 T
(CERN) 45.65 259.28 T
5 F
(httpd,) 74.81 259.28 T
1 F
( which is one of the HTTP server pro-) 110.79 259.28 T
(grams, has a unique architecture in that it is currently the) 45.65 247.28 T
(only HTTP server that is built on top of the WWW Com-) 45.65 235.28 T
(mon Library) 45.65 223.28 T
(, which is otherwise just used by W) 95.25 223.28 T
(eb clients.) 236.58 223.28 T
(Unlike other HTTP servers which only understand the) 45.65 211.28 T
(HTTP protocol, CERN) 45.65 199.28 T
5 F
(httpd) 140.6 199.28 T
1 F
( is able to speak all of the) 170.58 199.28 T
-0.36 (W) 45.65 187.28 P
-0.36 (eb protocols just like W) 54.29 187.28 P
-0.36 (eb clients can as all the protocols) 147.54 187.28 P
(are implemented by) 45.65 175.28 T
5 F
(libwww) 127.54 175.28 T
1 F
(.) 162.87 175.28 T
(CERN) 45.65 157.28 T
5 F
(httpd) 74.81 157.28 T
1 F
( has been able to run as a protocol gateway) 104.79 157.28 T
-0.03 (since version 2.00, released in March 1993, but additional) 45.65 145.28 P
-0.2 (features were required so the CERN) 45.65 133.28 P
5 F
-0.48 (httpd) 191.55 133.28 P
1 F
-0.2 ( could act as a) 221.53 133.28 P
(full proxy) 45.65 121.28 T
(. W) 84.7 121.28 T
(ith version 2.15, the server was enhanced to) 98.73 121.28 T
45.65 492.95 540.65 708.95 C
108.31 604.77 91.01 609.73 108.31 614.69 106.5 609.73 4 Y
0 X
0 K
V
106.5 609.73 213.85 609.73 2 L
2 H
2 Z
N
195.47 649.85 212.77 644.89 195.47 639.92 197.28 644.89 4 Y
V
89.93 644.89 197.28 644.89 2 L
N
269.93 604.96 252.57 609.74 269.82 614.88 268.07 609.9 4 Y
V
268.08 609.9 339.6 610.66 2 L
3 X
V
0 X
N
324.17 638.15 341.47 633.19 324.17 628.23 325.98 633.19 4 Y
V
247.87 633.19 325.98 633.19 2 L
N
6 8 Q
(GET ftp://some.host/path/doc.html HTTP/1.0) 74.45 656.73 T
(HTTP/1.0 200 Document follows) 99.65 593.42 T
(.) 119.18 592.11 T
7 10 Q
(ftp_pr) 54.55 554.15 T
(oxy=http://www_pr) 82.68 554.15 T
(oxy.my.domain/) 176.32 554.15 T
(ftp://some.host/path/doc.html) 54.55 566.86 T
6 14 Q
(HTTP) 135.6 622.08 T
7 10 Q
(www_pr) 182.45 674.86 T
(oxy.my.domain) 222.15 674.86 T
6 14 Q
(FTP) 283.76 617.99 T
7 10 Q
(FTP r) 265.25 637.89 T
(equest) 286.01 637.89 T
(FTP r) 273.82 596.68 T
(esponse) 294.58 596.68 T
54.65 598.09 92.45 650.73 R
7 X
V
0 X
N
6 F
(Client) 59.56 637.87 T
341.27 605.98 382.22 641.08 R
7 X
V
0 X
N
7 F
(some.host) 341.3 645.78 T
6 12 Q
(FTP) 352.99 628.21 T
6 10 Q
(server) 347.15 620.41 T
212.43 600.95 254.45 650.73 R
7 X
V
0 X
N
(Pr) 220.24 631.83 T
(oxy) 228.85 631.83 T
(server) 218.85 622.73 T
6 8 Q
(...) 100.14 584.42 T
414.65 492.95 531.65 699.95 R
7 X
V
3 12 Q
0 X
(Figure 4.) 414.65 691.95 T
4 11 Q
(A pr) 414.65 678.61 T
(oxied FTP transac-) 433.47 678.61 T
(tion.) 414.65 665.61 T
(Client makes a r) 414.65 652.61 T
(equest to) 486.57 652.61 T
(the pr) 414.65 639.61 T
(oxy server) 440.18 639.61 T
(, using) 484.42 639.61 T
(HTTP) 414.65 626.61 T
(, even though the) 440.1 626.61 T
(actual r) 414.65 613.61 T
(esour) 448.73 613.61 T
(ce is served) 472.74 613.61 T
(by an FTP server) 414.65 600.61 T
(. The) 490.02 600.61 T
-0.17 (pr) 414.65 587.61 P
-0.17 (oxy server sees fr) 424.01 587.61 P
-0.17 (om the) 499.66 587.61 P
(full URL that an FTP con-) 414.65 574.61 T
(nection should be made,) 414.65 561.61 T
(and r) 414.65 548.61 T
(etrieves the \336le fr) 437.74 548.61 T
(om) 513.92 548.61 T
(the r) 414.65 535.61 T
(emote FTP server) 434.69 535.61 T
(.) 512.19 535.61 T
(Result is sent back to the) 414.65 522.61 T
(client using HTTP) 414.65 509.61 T
(.) 493.81 509.61 T
-8.35 24.95 603.65 816.95 C
1 10 Q
0 X
0 K
-0.09 (accept full URLs. The same server can now act as a proxy) 297.65 486.28 P
-0.37 (server for multiple protocols since the client always passes) 297.65 474.28 P
(a full URL, thus allowing the proxy to understand which) 297.65 462.28 T
(protocol to use to interact with the destination server) 297.65 450.28 T
(. The) 507.52 450.28 T
(CERN) 297.65 438.28 T
5 F
(httpd) 326.81 438.28 T
1 F
( can even act simultaneously as a normal) 356.79 438.28 T
(HTTP server) 297.65 426.28 T
(, serving local \336les in addition to proxying.) 349.15 426.28 T
-0.3 ( The server has been greatly improved during the spring of) 297.65 402.28 P
(1994. The original implementation didn\325) 297.65 390.28 T
(t pass the access) 460.43 390.28 T
(authorization information to the remote server which is) 297.65 378.28 T
-0.07 (essential in accessing protected documents. The body part) 297.65 366.28 P
(of the message which is present with POST and PUT) 297.65 354.28 T
(methods was not forwarded prior to version 2.15, which) 297.65 342.28 T
(prevented HTML forms from working with the POST) 297.65 330.28 T
(method.) 297.65 318.28 T
(Caching of documents has been introduced, giving notice-) 297.65 294.28 T
-0.22 (able speed-ups in retrieve times. Caching is a wide subject) 297.65 282.28 P
(on its own and will not be studied in great detail in this) 297.65 270.28 T
(paper) 297.65 258.28 T
(.) 319.3 258.28 T
(It is also possible to compile a special SOCKS version of) 297.65 234.28 T
(CERN) 297.65 222.28 T
5 F
(httpd) 326.81 222.28 T
1 F
( \321 this means that the proxy server does) 356.79 222.28 T
(not have to run on the \336rewall machine, but rather it) 297.65 210.28 T
(speaks to the outside world through SOCKS. Note, that) 297.65 198.28 T
-0.34 (this means \322SOCKSifying\323 only the) 297.65 186.28 P
5 F
-0.82 (httpd) 443.35 186.28 P
1 F
-0.34 (, not the client) 473.34 186.28 P
(programs.) 297.65 174.28 T
(In FTP the passive mode \050P) 297.65 150.28 T
(ASV\051 is supported, in case a) 407.5 150.28 T
-0.48 (\336rewall administrator wants to deny incoming connections) 297.65 138.28 P
-0.27 (above port 1023. However) 297.65 126.28 P
-0.27 (, not all the FTP servers support) 403.04 126.28 P
FMENDPAGE
%%EndPage: "5" 6
%%Page: "6" 6
595.3 841.89 0 FMBEGINPAGE
45.65 775.62 531.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(T) 45.65 764.8 T
(echnical Details) 50.48 764.8 T
45.65 751.93 531.65 751.93 2 L
0.25 H
N
45.65 100.27 531.65 100.27 2 L
2 H
2 Z
N
0 10 Q
(6) 45.65 84.9 T
0 9 Q
( of) 51.21 84.9 T
0 10 Q
( 8) 62.19 84.9 T
0 9 Q
(W) 425.69 84.9 T
(orld-W) 434.01 84.9 T
(ide W) 462.39 84.9 T
(eb Proxies) 486.19 84.9 T
1 10 Q
(P) 45.65 531.28 T
(ASV which causes a fall-back to normal \050POR) 50.29 531.28 T
(T\051 mode.) 236.5 531.28 T
(This fails if incoming connections are refused, but this is) 45.65 519.28 T
(what would happen in any case, even if a separate FTP) 45.65 507.28 T
(tool was used.) 45.65 495.28 T
0 F
(2.3) 45.65 463.28 T
(Caching) 72.65 463.28 T
1 F
(The basic idea in caching is simple: store the retrieved) 45.65 447.28 T
(document into a local \336le for further use so it won\325) 45.65 435.28 T
(t be) 249.22 435.28 T
(necessary to connect to the remote server the next time) 45.65 423.28 T
(that document is requested) 45.65 411.28 T
4 F
(\050Fig. 5 and 6\051) 155.02 411.28 T
1 F
(.) 210.54 411.28 T
(However) 45.65 387.28 T
(, there are many problems that need to be coped) 81.88 387.28 T
-0.28 (with once caching is introduced. How long is it possible to) 45.65 375.28 P
(keep a document in the cache and still be sure that it is up-) 45.65 363.28 T
(to-date? How to decide which documents are worth cach-) 45.65 351.28 T
(ing and for how long?) 45.65 339.28 T
(Document expiry has been foreseen in the HTTP protocol) 45.65 315.28 T
-0.31 (which contains an object header specifying the expiry date) 45.65 303.28 P
-0.37 (of an object. However) 45.65 291.28 P
-0.37 (, currently there are very few servers) 132.95 291.28 P
45.65 537.95 540.65 708.95 C
7 X
0 K
90 450 17.01 5.67 188.66 586.5 G
2 H
2 Z
0 X
90 450 17.01 5.67 188.66 586.5 A
52.98 610.17 88.98 670.2 R
7 X
V
0 X
N
6 10 Q
(Client) 56.99 656.94 T
172.44 610.17 215.27 673.17 R
7 X
V
0 X
N
154.39 668.63 171.65 663.53 154.31 658.7 156.15 663.65 4 Y
V
90.65 664.17 156.16 663.65 2 L
N
230.2 621.78 212.9 626.74 230.2 631.7 228.39 626.74 4 Y
V
228.39 626.74 334.79 626.74 2 L
3 X
V
0 X
N
318.61 660.95 335.95 656.14 318.69 651.03 320.46 656 4 Y
V
215.73 655.09 320.46 656 2 L
N
6 8 Q
(GET) 86.99 677.53 T
8 F
(full-URL) 103.46 677.53 T
6 F
( HTTP/1.0) 130.96 677.53 T
107.96 614.21 90.65 619.17 107.96 624.13 106.15 619.17 4 Y
V
106.15 619.17 171.65 619.17 2 L
N
6 10 Q
(HTTP) 117.65 639.02 T
7 F
(www_pr) 174.45 683.56 T
(oxy.my.domain) 214.15 683.56 T
(Any supported pr) 218.12 639.09 T
(otocol) 302.16 639.09 T
8 F
(Request) 235.57 659.77 T
(Response) 278.09 616.52 T
6 8 Q
(HTTP/1.0 200 Document follows) 53.32 595.04 T
336.71 619.17 387.65 661.89 R
7 X
V
0 X
N
7 12 Q
(some.host) 336.71 666.35 T
6 10 Q
(Remote) 343.49 649.32 T
(server) 347.59 641.76 T
(Pr) 180.65 657.02 T
(oxy) 189.27 657.02 T
194.88 603.64 187.38 587.06 184.95 605.1 189.65 602.56 4 Y
V
90 157 28.34 39.68 215.73 587.06 A
189.73 620.82 171.65 619.17 186.11 630.15 186.22 624.83 4 Y
V
90 132 44.08 7.57 215.73 619.17 A
6 8 Q
(...) 36.65 576.65 T
6 10 Q
(server) 179.26 647.02 T
7 X
90 450 17.01 5.67 188.66 563.82 G
0 X
90 450 17.01 5.67 188.66 563.82 A
171.65 563.82 205.67 575.16 R
7 X
V
171.65 563.82 171.65 586.5 2 L
0 X
N
205.67 563.82 205.67 586.5 2 L
N
(Cache) 172.49 566.78 T
414.65 555.95 531.65 699.95 R
7 X
V
3 12 Q
0 X
(Figure 5.) 414.65 691.95 T
4 11 Q
(A caching pr) 414.65 678.61 T
(oxy) 471 678.61 T
(.) 485.65 678.61 T
-0.7 (The r) 414.65 665.61 P
-0.7 (equested document is) 437.04 665.61 P
(r) 414.65 652.61 T
(etrieved fr) 418.52 652.61 T
(om the r) 463.57 652.61 T
(emote) 499.79 652.61 T
(server and stor) 414.65 639.61 T
(ed locally) 480.77 639.61 T
(on the pr) 414.65 626.61 T
(oxy server for) 453.92 626.61 T
(later use.) 414.65 613.61 T
6 8 Q
(...) 53.32 587.04 T
-8.35 24.95 603.65 816.95 C
45.65 114.95 549.65 285.95 C
190.6 245.55 207.91 240.59 190.6 235.63 192.41 240.59 4 Y
0 X
0 K
V
88.84 240.59 192.41 240.59 2 L
2 H
2 Z
N
6 8 Q
(GET) 101.16 248.86 T
8 F
(full-URL) 117.63 248.86 T
6 F
(HTTP/1.0) 147.38 248.86 T
113.68 202.19 96.41 207.25 113.74 212.11 111.9 207.16 4 Y
V
111.91 207.16 207.74 206.57 2 L
N
6 10 Q
(HTTP) 128.53 218.37 T
7 F
(www_pr) 177.41 265.81 T
(oxy.my.domain) 217.11 265.81 T
7 X
90 450 17.01 5.67 232.4 168.53 G
0 X
90 450 17.01 5.67 232.4 168.53 A
7 X
90 450 17.01 5.67 232.4 145.85 G
0 X
90 450 17.01 5.67 232.4 145.85 A
215.39 145.85 249.41 157.19 R
7 X
V
215.39 145.85 215.39 168.53 2 L
0 X
N
249.41 145.85 249.41 168.53 2 L
N
6 F
(Cache) 216.23 148.81 T
6 8 Q
(HTTP/1.0 200 Document follows) 90.65 186.09 T
6 10 Q
(...) 90.65 179.79 T
207.57 195.84 252.65 246.86 R
7 X
V
0 X
N
(Pr) 216.91 228.42 T
(oxy) 225.52 228.42 T
(server) 215.52 219.6 T
219.39 199.07 204.38 209.41 222.59 208.59 219.26 204.41 4 Y
V
0 62 31.7 42.53 204.39 166.88 A
332.48 197.21 384.41 231.23 R
7 X
V
0 X
N
7 12 Q
(some.host) 330.41 237.34 T
6 10 Q
(Remote) 339.75 218.66 T
(server) 343.85 211.1 T
54.65 195.23 96.41 246.26 R
7 X
V
0 X
N
(Client) 61.54 233.69 T
423.65 150.95 540.65 267.95 R
7 X
V
3 12 Q
0 X
(Figure 6.) 423.65 259.95 T
4 11 Q
(Cache hit on the pr) 423.65 246.61 T
(oxy) 508.08 246.61 T
(.) 522.73 246.61 T
-0.22 (If an up-to-date version of) 423.65 233.61 P
(the r) 423.65 220.61 T
(equested document is) 443.69 220.61 T
(found in the cache of the) 423.65 207.61 T
(pr) 423.65 194.61 T
(oxy server no connec-) 433.01 194.61 T
-0.57 (tion to the r) 423.65 181.61 P
-0.57 (emote server is) 473.11 181.61 P
(necessary) 423.65 168.61 T
(.) 466.37 168.61 T
-8.35 24.95 603.65 816.95 C
1 10 Q
0 X
0 K
-0.09 (that actually give the expiry information, and until servers) 297.65 531.28 P
(start sending it more commonly we will have to rely on) 297.65 519.28 T
-0.45 (other) 297.65 507.28 P
-0.45 (, more heuristic approaches, like only making a rough) 317.79 507.28 P
(estimate of the time to live for an object.) 297.65 495.28 T
(More importantly) 297.65 471.28 T
(, since many of the documents in the) 367.79 471.28 T
-0.19 (W) 297.65 459.28 P
-0.19 (eb are \322living\323 documents, specifying an expiry date for) 306.29 459.28 P
(them is generally a dif) 297.65 447.28 T
(\336cult task. A given document may) 386.85 447.28 T
-0.52 (remain unchanged for a relatively long time, then suddenly) 297.65 435.28 P
(change. This change may have been unforeseen by the) 297.65 423.28 T
(document author and so wouldn\325) 297.65 411.28 T
(t be accurately re\337ected) 429.05 411.28 T
(in the expiry information.) 297.65 399.28 T
0 F
(2.4) 297.65 367.28 T
(Protocol Additions) 324.65 367.28 T
1 F
(When it is essential that the retrieved document is up-to-) 297.65 344.28 T
(date, it is necessary to contact the remote server for each) 297.65 332.28 T
(GET request. The HTTP protocol already contains the) 297.65 320.28 T
(HEAD method for retrieving a documents\325 header infor-) 297.65 308.28 T
FMENDPAGE
%%EndPage: "6" 7
%%Page: "7" 7
595.3 841.89 0 FMBEGINPAGE
63.65 775.62 549.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(The Future) 503.21 764.8 T
63.65 751.93 549.65 751.93 2 L
0.25 H
N
63.65 100.27 549.65 100.27 2 L
2 H
2 Z
N
(W) 63.65 84.9 T
(orld-W) 71.97 84.9 T
(ide W) 100.35 84.9 T
(eb Proxies) 124.15 84.9 T
0 10 Q
(7) 525.06 84.9 T
0 9 Q
( of) 530.61 84.9 T
0 10 Q
(8) 544.09 84.9 T
1 F
(mation, but not the document itself. This is useful for) 63.65 702.28 T
(checking if the document has been modi\336ed since the last) 63.65 690.28 T
(access.) 63.65 678.28 T
(However) 63.65 654.28 T
(, in cases where the document has changed, it) 99.88 654.28 T
(would be very inef) 63.65 642.28 T
(\336cient to make a second connection to) 138.69 642.28 T
(the remote server to do the actual GET request to retrieve) 63.65 630.28 T
(the document. The overhead of making a connection is) 63.65 618.28 T
(often considerable.) 63.65 606.28 T
(The HTTP protocol was therefore extended to contain an) 63.65 582.28 T
5 F
(If-Modif) 63.65 570.28 T
(ied-Since) 111.63 570.28 T
1 F
( request header) 165.6 570.28 T
(, making it possi-) 225.69 570.28 T
(ble to do) 63.65 558.28 T
4 F
( a conditional GET r) 98.63 558.28 T
(equest) 181.56 558.28 T
1 F
(. The GET request is) 207.09 558.28 T
(otherwise the same except that this header contains the) 63.65 546.28 T
(date and time that the object currently in the client \050proxy) 63.65 534.28 T
(cache\051 was last modi\336ed.) 63.65 522.28 T
(If the document has not been modi\336ed since the date and) 63.65 498.28 T
(time speci\336ed it will not be sent back, instead only the rel-) 63.65 486.28 T
(evant object meta-information headers, such as a new) 63.65 474.28 T
(expiry date will be returned, along with a special result) 63.65 462.28 T
(code. If the document has been modi\336ed it will be sent) 63.65 450.28 T
(back as if the request was just a normal GET request.) 63.65 438.28 T
-0.25 (The conditional GET makes several types of utilities more) 63.65 414.28 P
(ef) 63.65 402.28 T
(\336cient. It can be used by mirroring software that has to) 71.24 402.28 T
(refresh a lar) 63.65 390.28 T
(ge number of \336les on a regular basis. The) 111.2 390.28 T
(caching proxy server could refresh its cache regularly dur-) 63.65 378.28 T
(ing periods of client inactivity) 63.65 366.28 T
(, not just at times when a) 183.49 366.28 T
(document is explicitly requested.) 63.65 354.28 T
(It\325) 63.65 330.28 T
(s worth noting that the conditional GET header is back-) 72.54 330.28 T
-0.46 (ward compatible. HTTP is de\336ned so that unknown header) 63.65 318.28 P
-0.22 (\336elds are ignored. If the remote HTTP server does not sup-) 63.65 306.28 P
-0.43 (port the conditional GET request no harm will be done, the) 63.65 294.28 P
(server will just send the document in full. Fortunately all) 63.65 282.28 T
(the major HTTP servers already support the conditional) 63.65 270.28 T
(GET header) 63.65 258.28 T
(.) 111.67 258.28 T
(The caching mechanism is disk based and persistent,) 63.65 234.28 T
(which means it survives restarts of the proxy process as) 63.65 222.28 T
(well as the server machine itself. Because of this feature,) 63.65 210.28 T
(caching opens up new possibilities when the caching) 63.65 198.28 T
(proxy server and a W) 63.65 186.28 T
(eb client are on the same machine.) 148.88 186.28 T
(The proxy can be con\336gured to use only the local cache,) 63.65 174.28 T
(making it possible to give demos without an internet con-) 63.65 162.28 T
-0.18 (nection. Y) 63.65 150.28 P
-0.18 (ou can even unplug a portable machine and take) 104.11 150.28 P
(it to the cafeteria.) 63.65 138.28 T
0 12 Q
(3.0) 315.65 700.95 T
(The Future) 342.65 700.95 T
1 10 Q
(As the public enthusiasm for proxies has arisen just) 315.65 680.28 T
-0.17 (recently) 315.65 668.28 P
-0.17 (, there are many features that are still in their early) 347.2 668.28 P
(stages, though the basic functionality is already there.) 315.65 656.28 T
(Caching is clearly a wide and complicated area, and it is) 315.65 644.28 T
-0.3 (one of the parts of the proxy server that needs to be greatly) 315.65 632.28 P
(enhanced. The proxy could be enhanced to do lookahead,) 315.65 620.28 T
(retrieving all documents that are likely to be accessed) 315.65 608.28 T
(soon. For example, all the documents referenced by a doc-) 315.65 596.28 T
-0.45 (ument that was requested recently) 315.65 584.28 P
-0.45 (, including all the inlined) 449.2 584.28 P
(images.) 315.65 572.28 T
(The HTTP protocol should be further enhanced to allow) 315.65 548.28 T
(multipart requests and responses; this would allow both) 315.65 536.28 T
-0.47 (caching and mirroring software to refresh lar) 315.65 524.28 P
-0.47 (ge amounts of) 491.94 524.28 P
(\336les in a single connection, rather than re-connecting to) 315.65 512.28 T
(the remote server once for each \336le. Multipart messages) 315.65 500.28 T
-0.43 (are also needed by W) 315.65 488.28 P
-0.43 (eb clients for retrieving all the inlined) 399.16 488.28 P
(images with one connection.) 315.65 476.28 T
(Several aspects of the proxy architecture need to standard-) 315.65 452.28 T
(ized. A proxy server port number should be assigned by) 315.65 440.28 T
-0.13 (the Internet authority) 315.65 428.28 P
-0.13 (. On the client side there is a need for) 399.13 428.28 P
(a fallback mechanism for proxies so that a client can con-) 315.65 416.28 T
-0.07 (nect to a second or third proxy server if the primary proxy) 315.65 404.28 P
-0.16 (failed \050like DNS\051. Also a dynamic lookup method for \336nd-) 315.65 392.28 P
(ing the closest proxy server is necessary; this might be) 315.65 380.28 T
(achieved by using a standard DNS name, for example) 315.65 368.28 T
5 F
(www_proxy.my.domain) 315.65 356.28 T
1 F
(. This kind of dynamic host) 429.59 356.28 T
(lookup is not just proxy-centric \321 W) 315.65 344.28 T
(eb clients should) 464.76 344.28 T
-0.25 (have the same kind of mechanism for \336nding a local home) 315.65 332.28 P
(page, and the closest functional server in a set of servers) 315.65 320.28 T
(mirroring each other) 315.65 308.28 T
(.) 397.26 308.28 T
0 12 Q
(4.0) 315.65 271.95 T
( Conclusions) 342.65 271.95 T
1 10 Q
(Thanks to standard proxy support in the clients, and the) 315.65 247.28 T
(wide availability of the) 315.65 235.28 T
5 F
(cern_httpd) 410.59 235.28 T
1 F
( proxy server) 470.56 235.28 T
(, any-) 522.89 235.28 T
(one behind a \336rewall can now have full W) 315.65 223.28 T
(eb access) 484.72 223.28 T
-0.29 (through the \336rewall host with minimum ef) 315.65 211.28 P
-0.29 (fort and without) 483.62 211.28 P
(compromising security) 315.65 199.28 T
(. Corporate users don\325) 406.89 199.28 T
(t have to be) 495.53 199.28 T
(denied access to the W) 315.65 187.28 T
(eb any longer) 406.44 187.28 T
(.) 460.29 187.28 T
-0.13 (Considering the extremely fast growth of the W) 315.65 163.28 P
-0.13 (eb, its abil-) 505.21 163.28 P
(ity to replace FTP) 315.65 151.28 T
(, and the fact that by the time this paper) 386.44 151.28 T
(is published the W) 315.65 139.28 T
(eb usage has already passed Gopher) 389.53 139.28 T
(usage metered by the packet statistics in the network, the) 315.65 127.28 T
FMENDPAGE
%%EndPage: "7" 8
%%Page: "8" 8
595.3 841.89 0 FMBEGINPAGE
45.65 775.62 531.65 775.62 2 L
2 H
0 Z
0 X
0 K
N
0 9 Q
(Authors) 45.65 764.8 T
45.65 751.93 531.65 751.93 2 L
0.25 H
N
45.65 100.27 531.65 100.27 2 L
2 H
2 Z
N
0 10 Q
(8) 45.65 84.9 T
0 9 Q
( of) 51.21 84.9 T
0 10 Q
( 8) 62.19 84.9 T
0 9 Q
(W) 425.69 84.9 T
(orld-W) 434.01 84.9 T
(ide W) 462.39 84.9 T
(eb Proxies) 486.19 84.9 T
1 10 Q
(use of caching proxy servers becomes essential to allow) 45.65 702.28 T
(the growth to continue in case the total Internet capacity) 45.65 690.28 T
(doesn\325) 45.65 678.28 T
(t keep up with the W) 72.12 678.28 T
(eb growth rate. The proxy) 154.87 678.28 T
(caching makes it possible to gain \322virtual bandwidth\323 as) 45.65 666.28 T
(documents often get returned from a nearby cache rather) 45.65 654.28 T
(than from some far away server) 45.65 642.28 T
(.) 171.93 642.28 T
0 12 Q
(5.0) 45.65 605.95 T
(Authors) 72.65 605.95 T
1 10 Q
-0.29 (Ari Luotonen is writing his Master) 45.65 581.28 P
-0.29 (\325) 183.65 581.28 P
-0.29 (s Thesis at CERN until) 186.43 581.28 P
(the summer 1994 on the architecture of generic hypertext) 45.65 569.28 T
(servers. He is studying software engineering and mathe-) 45.65 557.28 T
-0.2 (matics in T) 45.65 545.28 P
-0.2 (ampere University of T) 89.54 545.28 P
-0.2 (echnology) 181.79 545.28 P
-0.2 (, Finland, and) 222.77 545.28 P
(will graduate in May 1995. His electronic mail address is) 45.65 533.28 T
(luotonen@www) 45.65 521.28 T
(.cern.ch.) 110.84 521.28 T
(Kevin Altis is an Internet Program Architect at Intel Cor-) 45.65 497.28 T
(porations\325 Media Delivery Laboratory in Hillsboro, Ore-) 45.65 485.28 T
(gon. He is interested in PC oriented usage of multi-media) 45.65 473.28 T
-0.16 (information via the Internet. His electronic mail address is) 45.65 461.28 P
(altis@ibeam.intel.com.) 45.65 449.28 T
0 12 Q
(6.0) 45.65 412.95 T
(References) 72.65 412.95 T
1 10 Q
([HTTP] HyperT) 45.65 388.28 T
(ext T) 110.18 388.28 T
(ransfer Protocol, <URL:http://info.-) 130.65 388.28 T
(cern.ch/hypertext/WWW/Protocols/HTTP/HTTP2.html>) 45.65 376.28 T
-0.34 ([FTP] File T) 45.65 352.28 P
-0.34 (ransfer Protocol. J.Postel and J.Reynolds, File) 95.15 352.28 P
(T) 45.65 340.28 T
(ransfer Protocol, Internet RFC 959, October 1985.) 51.41 340.28 T
(<URL: ftp://ds.internic.net/rfc/rfc959.txt>) 45.65 328.28 T
([GOPHER]) 45.65 304.28 T
(The Internet Gopher) 94.79 304.28 T
(. F) 175.83 304.28 T
(.Anklesaria et.al., The) 185.59 304.28 T
(Internet Gopher Protocol, Internet RFC 1436, March) 45.65 292.28 T
(1993. <URL: ftp://ds.internic.net/rfc/rfc1436.txt>) 45.65 280.28 T
([W) 45.65 256.28 T
(AIS] W) 57.31 256.28 T
(ide-Area Information System. <URL: http://) 88.27 256.28 T
(www) 45.65 244.28 T
(.wais.com/z3950.html>) 66.65 244.28 T
([NNTP] Network News T) 45.65 220.28 T
(ransfer Protocol, B.Kantor and) 149.38 220.28 T
(Phil Lapsley) 45.65 208.28 T
(, Network News T) 95.25 208.28 T
(ransfer Protocol, Internet) 168.73 208.28 T
(RFC 977, February 1986. <URL: http://info.cern.ch/) 45.65 196.28 T
(hypertext/WWW/Protocols/rfc977/rfc977.html>) 45.65 184.28 T
([CGI] The Common Gateway Interface, Rob McCool,) 45.65 160.28 T
(1993-1994. <URL: http://hoohoo.ncsa.uiuc.edu/cgi/>) 45.65 148.28 T
-0.13 ([URL] Uniform Resource Locators. <URL: http://info.cer-) 297.65 702.28 P
(n.ch/hypertext/WWW/Addressing/Addressing.html>) 297.65 690.28 T
([LIBWWW] The WWW Common Library) 297.65 666.28 T
(. <URL: http://) 469.09 666.28 T
(info.cern.ch/hypertext/WWW/Library/Status.html>) 297.65 654.28 T
([CERN-HTTPD] CERN hypertext daemon, <URL: http://) 297.65 630.28 T
(info.cern.ch/hypertext/WWW/Daemon/Status.html>) 297.65 618.28 T
([L) 297.65 594.28 T
(YNX] L) 306.09 594.28 T
(ynx, a full-featured WWW client for character) 339.12 594.28 T
(terminals.<URL: http://www) 297.65 582.28 T
(.cc.ukans.edu/lynx_help/) 413.14 582.28 T
(L) 297.65 570.28 T
(ynx_users_guide.html>) 303.21 570.28 T
([MOSAIC-X] NCSA Mosaic for X W) 297.65 546.28 T
(indow System.) 450.2 546.28 T
(<URL: http://www) 297.65 534.28 T
(.ncsa.uiuc.edu/SDG/Software/Mosaic/) 373.44 534.28 T
(Docs/mosaic-docs.html>.) 297.65 522.28 T
([MOSAIC-WIN] NCSA Mosaic for Microsoft W) 297.65 498.28 T
(indows.) 495.16 498.28 T
(<URL: http://www) 297.65 486.28 T
(.ncsa.uiuc.edu/SDG/Software/W) 373.44 486.28 T
(inMo-) 503.78 486.28 T
(saic/HomePage.html>.) 297.65 474.28 T
-0.42 ([EMACS-WWW] The Emacs WWW Browser by W) 297.65 450.28 P
-0.42 (illiam) 506.24 450.28 P
(Perry) 297.65 438.28 T
(. <URL: http://moose.cs.indiana.edu/usr/local/www/) 318.65 438.28 T
(elisp/w3/docs.html>) 297.65 426.28 T
(CERN httpd as a proxy server: <URL: http://info.cern.ch/) 297.65 402.28 T
(hypertext/WWW/Daemon/User/Proxies/Proxies.html>) 297.65 390.28 T
(Proxy support in Mosaic for X: <URL: http://www) 297.65 366.28 T
(.nc-) 501.14 366.28 T
(sa.uiuc.edu/SDG/Software/Mosaic/Docs/proxy-gateway-) 297.65 354.28 T
(s.html>) 297.65 342.28 T
(Proxy support in W) 297.65 318.28 T
(inMosaic: <URL: http://www) 375.82 318.28 T
(.nc-) 494.08 318.28 T
(sa.uiuc.edu/SDG/Software/W) 297.65 306.28 T
(inMosaic/ProxyInfo.html>) 416.06 306.28 T
FMENDPAGE
%%EndPage: "8" 9
%%Trailer
%%BoundingBox: 0 0 595.3 841.89
%%Pages: 8 1
%%DocumentFonts: Helvetica-Bold
%%+ Times-Roman
%%+ Times-Bold
%%+ Times-BoldItalic
%%+ Times-Italic
%%+ Courier
%%+ AvantGarde-Demi
%%+ AvantGarde-BookOblique
%%+ AvantGarde-DemiOblique
