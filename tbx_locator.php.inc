<?php

class tbxLocator {
	public $PosBeg		= false;
	public $PosEnd		= false;
	public $Enlarged	= false;
	public $FullName	= false;
	public $SubName		= '';
	public $SubOk		= false;
	public $SubLst		= [];
	public $SubNbr		= 0;
	public $PrmLst		= [];
	public $PrmIfNbr	= false;
	public $MagnetId	= false;
	public $BlockFound	= false;
	public $FirstMerge	= true;
	public $ConvProtect	= true;
	public $ConvStr		= true;
	public $ConvHex		= false;
	public $ConvPhone	= false;
	public $mode		= TBX_CONVERT_DEFAULT;
	public $break		= true;
}
