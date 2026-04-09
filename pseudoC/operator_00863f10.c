// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00863f10
// Size: 368 bytes
// Signature: undefined __thiscall operator()(ChangeHeightmapRayWalkFunc * this, int param_1, int param_2)


/* DensityMapHeightUpdater::ChangeHeightmapRayWalkFunc::TEMPNAMEPLACEHOLDERVALUE(int, int) */

void __thiscall
DensityMapHeightUpdater::ChangeHeightmapRayWalkFunc::operator()
          (ChangeHeightmapRayWalkFunc *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iStack_40;
  int iStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = param_1 - *(int *)(this + 0x48);
  uVar2 = param_2 - *(int *)(this + 0x4c);
  if (*(int *)(this + 8) < 1) {
    uVar5 = removeFromHeightmap(*(deque **)(this + 0x10),*(ushort **)(this + 0x18),
                                *(int *)(this + 0x20),*(int *)(this + 0x24),uVar1,uVar2,
                                *(int *)(this + 0x28),*(int *)(this + 0x2c),*(short *)(this + 0x30),
                                *(short *)(this + 0x32),*(short *)(this + 0x34),
                                *(short *)(this + 0x36),*(short **)(this + 0x40),&iStack_3c,
                                &iStack_40);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)this = *(undefined4 *)(this + 0x50);
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  else {
    uVar5 = addToHeightmap(*(deque **)(this + 0x10),*(ushort **)(this + 0x18),*(int *)(this + 0x20),
                           *(int *)(this + 0x24),uVar1,uVar2,*(int *)(this + 0x28),
                           *(int *)(this + 0x2c),*(short *)(this + 0x30),*(short *)(this + 0x32),
                           *(short *)(this + 0x34),*(short *)(this + 0x36),
                           (short)*(undefined4 *)(this + 0x38),*(short **)(this + 0x40),false);
    if ((uVar5 & 1) != 0) {
      iVar7 = *(int *)(this + 0x50);
      iVar6 = *(int *)(this + 8) + -1;
      *(int *)this = iVar7;
      *(int *)(this + 8) = iVar6;
      goto LAB_00864020;
    }
  }
  iVar6 = *(int *)(this + 8);
  iVar7 = *(int *)(this + 0x50);
LAB_00864020:
  *(int *)(this + 0x50) = iVar7 + 1;
  if ((iVar6 == 0) || ((uint)(*(int *)(this + 0x20) - *(int *)(this + 0x2c)) <= uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = uVar2 < (uint)(*(int *)(this + 0x24) - *(int *)(this + 0x2c));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


