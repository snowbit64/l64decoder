// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createScriptSystem
// Entry Point: 00bb5df0
// Size: 320 bytes
// Signature: undefined __thiscall createScriptSystem(ScriptSystemManager * this, uint param_1)


/* ScriptSystemManager::createScriptSystem(unsigned int) */

undefined8 __thiscall
ScriptSystemManager::createScriptSystem(ScriptSystemManager *this,uint param_1)

{
  LuauScriptSystem *pLVar1;
  
  pLVar1 = *(LuauScriptSystem **)this;
  if (pLVar1 != (LuauScriptSystem *)0x0) {
    LuauScriptSystem::~LuauScriptSystem(pLVar1);
    operator_delete(pLVar1);
  }
  *(undefined8 *)this = 0;
  pLVar1 = (LuauScriptSystem *)operator_new(0x148);
                    /* try { // try from 00bb5e30 to 00bb5e37 has its CatchHandler @ 00bb5f30 */
  LuauScriptSystem::LuauScriptSystem(pLVar1,param_1);
  *(LuauScriptSystem **)this = pLVar1;
  LuauScriptSystem::doBuffer
            (pLVar1,(uchar *)
                    "GS_PLATFORM_TYPE_PC = 0; GS_PLATFORM_TYPE_PS4 = 1; GS_PLATFORM_TYPE_XBOXONE = 2; GS_PLATFORM_TYPE_IOS = 3; GS_PLATFORM_TYPE_ANDROID = 4; GS_PLATFORM_TYPE_SWITCH = 5; GS_PLATFORM_TYPE_GGP = 6;GS_PLATFORM_TYPE = 4;"
             ,0xd4,(char *)0x0,(char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_PRODUCT_ID = \"3CF02B77\";",0x1b,(char *)0x0,
             (char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_IS_MAC_APP_STORE_VERSION = false;",0x24,
             (char *)0x0,(char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_IS_STEAM_VERSION = false;",0x1c,(char *)0x0,
             (char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_IS_EPIC_VERSION = false;",0x1b,(char *)0x0,
             (char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_IS_MSSTORE_VERSION = false;",0x1e,(char *)0x0,
             (char *)0x0,false);
  LuauScriptSystem::doBuffer
            (*(LuauScriptSystem **)this,(uchar *)"GS_IS_NETFLIX_VERSION = false;",0x1e,(char *)0x0,
             (char *)0x0,false);
  return *(undefined8 *)this;
}


