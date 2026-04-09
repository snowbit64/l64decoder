// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00b025c4
// Size: 196 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* StreamableCallback::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

undefined8
StreamableCallback::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  int iVar1;
  long *plVar2;
  IAudioDevice *extraout_x1;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x18));
    param_2 = extraout_x1;
  }
  *(undefined4 *)(param_1 + 8) = 3;
  if (((DAT_02115340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02115340,param_2), iVar1 != 0))
  {
                    /* try { // try from 00b02638 to 00b02647 has its CatchHandler @ 00b026b0 */
    StreamQueue::StreamQueue((StreamQueue *)&DAT_02115240);
                    /* try { // try from 00b02648 to 00b02657 has its CatchHandler @ 00b02688 */
    Mutex::Mutex((Mutex *)&DAT_02115300,true);
    DAT_02115328 = 0;
    DAT_02115330 = 0;
    DAT_02115338 = 0;
    __cxa_atexit(StreamManager::~StreamManager,&DAT_02115240,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02115340);
  }
  StreamManager::releaseCallback((StreamManager *)&DAT_02115240,(StreamableCallback *)param_1);
  return 1;
}


