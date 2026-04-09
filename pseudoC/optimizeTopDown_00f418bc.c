// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimizeTopDown
// Entry Point: 00f418bc
// Size: 272 bytes
// Signature: undefined __thiscall optimizeTopDown(btDbvt * this, int param_1)


/* btDbvt::optimizeTopDown(int) */

void __thiscall btDbvt::optimizeTopDown(btDbvt *this,int param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auStack_68 [4];
  undefined4 local_64;
  uint local_60;
  long local_58;
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(this + 0x14);
    local_58 = 0;
    local_64 = 0;
    local_60 = 0;
    local_50 = 1;
    if (0 < (int)uVar1) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      local_58 = (*(code *)PTR_FUN_01048e38)((ulong)uVar1 << 3,0x10);
      lVar4 = *(long *)this;
      local_60 = uVar1;
    }
    local_50 = '\x01';
    FUN_00f41538(this,lVar4,auStack_68,0xffffffff);
    uVar3 = FUN_00f419cc(this,auStack_68,param_1);
    *(undefined8 *)this = uVar3;
    if ((local_58 != 0) && (local_50 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


