// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 00f42ee8
// Size: 524 bytes
// Signature: undefined __thiscall write(btDbvt * this, IWriter * param_1)


/* btDbvt::write(btDbvt::IWriter*) const */

void __thiscall btDbvt::write(btDbvt *this,IWriter *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined **local_70;
  uint local_64;
  undefined4 local_60;
  long local_58;
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = &PTR__btDbvtNodeEnumerator_01018db8;
  iVar1 = *(int *)(this + 0x14);
  local_50 = 1;
  local_58 = 0;
  local_64 = 0;
  local_60 = 0;
  if (0 < iVar1) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    local_58 = (*(code *)PTR_FUN_01048e38)((long)iVar1 << 4,0x10);
    local_60 = (undefined4)((long)iVar1 << 1);
  }
  local_50 = '\x01';
  enumNodes(*(btDbvtNode **)this,(ICollide *)&local_70);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)this,local_64);
  uVar7 = (ulong)local_64;
  if (0 < (int)local_64) {
    uVar10 = 0;
    do {
      uVar8 = uVar7 & 0xffffffff;
      lVar4 = *(long *)(local_58 + uVar10 * 8);
      if (*(long *)(lVar4 + 0x20) == 0) {
        uVar6 = 0xffffffff;
        lVar9 = *(long *)(lVar4 + 0x30);
        if (lVar9 != 0) goto LAB_00f4301c;
LAB_00f43058:
        (**(code **)(*(long *)param_1 + 0x20))(param_1,lVar4,uVar10 & 0xffffffff,uVar6);
      }
      else {
        uVar6 = uVar8;
        if (0 < (int)uVar7) {
          uVar5 = 0;
          do {
            uVar6 = uVar5;
            if (*(long *)(local_58 + uVar5 * 8) == *(long *)(lVar4 + 0x20)) break;
            uVar5 = uVar5 + 1;
            uVar6 = uVar8;
          } while (uVar8 != uVar5);
        }
        lVar9 = *(long *)(lVar4 + 0x30);
        if (lVar9 == 0) goto LAB_00f43058;
LAB_00f4301c:
        if (0 < (int)uVar7) {
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            if (*(long *)(local_58 + uVar5 * 8) == *(long *)(lVar4 + 0x28)) break;
            uVar5 = uVar5 + 1;
            uVar7 = uVar8;
          } while (uVar8 != uVar5);
          uVar5 = 0;
          do {
            if (*(long *)(local_58 + uVar5 * 8) == lVar9) {
              uVar8 = uVar5 & 0xffffffff;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar8 != uVar5);
        }
        (**(code **)(*(long *)param_1 + 0x18))(param_1,lVar4,uVar10 & 0xffffffff,uVar6,uVar7,uVar8);
      }
      uVar7 = (ulong)(int)local_64;
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar7);
  }
  local_70 = &PTR__btDbvtNodeEnumerator_01018db8;
  ppuVar3 = &PTR__btDbvtNodeEnumerator_01018db8;
  if ((local_58 != 0) && (ppuVar3 = local_70, local_50 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    local_70 = &PTR__btDbvtNodeEnumerator_01018db8;
    (*(code *)PTR_FUN_01048e40)();
    ppuVar3 = local_70;
  }
  local_70 = ppuVar3;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


