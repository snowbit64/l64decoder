// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: threadExecuteFunction
// Entry Point: 00c0141c
// Size: 180 bytes
// Signature: undefined __thiscall threadExecuteFunction(MapFold * this, ThreadData * param_1, bool * param_2)


/* MapFold::threadExecuteFunction(MapFold::ThreadData*, bool volatile&) */

void __thiscall MapFold::threadExecuteFunction(MapFold *this,ThreadData *param_1,bool *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
LAB_00c014b0:
    param_1[0x1c] = (ThreadData)0x1;
  }
  else {
    if (*param_2 == false) {
      uVar3 = 0;
      do {
        uVar1 = (**(code **)(*(long *)this + 0x10))
                          (this,*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8),
                           *(undefined8 *)(param_1 + 8));
        if ((uVar1 & 1) == 0) {
          uVar2 = *(uint *)(param_1 + 0x18);
          break;
        }
        FUN_00f27700(0xffffffff,this + 8);
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar3 = uVar3 + 1;
        if (uVar2 <= uVar3) goto LAB_00c014b0;
      } while (*param_2 == false);
    }
    else {
      uVar3 = 0;
    }
    FUN_00f27700((int)uVar3 - uVar2,this + 8);
    param_1[0x1c] = (ThreadData)0x0;
    *param_2 = true;
  }
  return;
}


