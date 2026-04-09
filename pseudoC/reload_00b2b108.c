// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reload
// Entry Point: 00b2b108
// Size: 204 bytes
// Signature: undefined reload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Resource::reload() */

undefined8 Resource::reload(void)

{
  long *in_x0;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((undefined8 *)in_x0[5] != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2b13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (***(code ***)(undefined8 *)in_x0[5])();
    return uVar1;
  }
  plVar5 = in_x0 + 2;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*in_x0 + 0x20))();
  uVar2 = (**(code **)(*in_x0 + 0x18))();
  if ((uVar2 & 1) != 0) {
    RenderDeviceManager::getInstance();
    uVar1 = RenderDeviceManager::getCurrentRenderDevice();
    AudioDeviceManager::getInstance();
    uVar3 = AudioDeviceManager::getCurrentAudioDevice();
    ScriptSystemManager::getInstance();
    uVar4 = ScriptSystemManager::getCurrentScriptSystem();
                    /* WARNING: Could not recover jumptable at 0x00b2b1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar1,uVar3,uVar4);
    return uVar1;
  }
  return 0;
}


