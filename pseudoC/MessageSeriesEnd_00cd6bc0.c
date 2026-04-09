// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageSeriesEnd
// Entry Point: 00cd6bc0
// Size: 228 bytes
// Signature: undefined __thiscall MessageSeriesEnd(Filter * this, int param_1, bool param_2)


/* CryptoPP::Filter::MessageSeriesEnd(int, bool) */

undefined8 __thiscall CryptoPP::Filter::MessageSeriesEnd(Filter *this,int param_1,bool param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(int *)(this + 0x28) != 1) {
    if (*(int *)(this + 0x28) != 0) {
      return 0;
    }
    uVar1 = (**(code **)(*(long *)this + 0x68))(this,param_2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  uVar1 = (**(code **)(*(long *)this + 400))(this);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar1 = (**(code **)(*plVar2 + 0x148))(plVar2,&DEFAULT_CHANNEL,param_1 + -1,param_2);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 0x28) = 1;
      return 1;
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return 0;
}


