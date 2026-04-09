// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeEmpty
// Entry Point: 00b87e6c
// Size: 464 bytes
// Signature: undefined __thiscall initializeEmpty(ChunkedBitSquare * this, uint param_1, bool param_2)


/* ChunkedBitSquare::initializeEmpty(unsigned int, bool) */

void __thiscall ChunkedBitSquare::initializeEmpty(ChunkedBitSquare *this,uint param_1,bool param_2)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ushort local_6c [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pvVar7 = *(void **)(this + 0x28);
  if (pvVar7 == (void *)0x0) goto LAB_00b87ef0;
  if (*(int *)(this + 0x34) * *(int *)(this + 0xc) == 0) {
LAB_00b87ee8:
    operator_delete__(pvVar7);
  }
  else {
    uVar11 = 0;
    do {
      operator_delete(*(void **)((long)pvVar7 + uVar11 * 8));
      uVar11 = uVar11 + 1;
      pvVar7 = *(void **)(this + 0x28);
    } while (uVar11 < (uint)(*(int *)(this + 0x34) * *(int *)(this + 0xc)));
    if (pvVar7 != (void *)0x0) goto LAB_00b87ee8;
  }
  *(undefined8 *)(this + 0x28) = 0;
LAB_00b87ef0:
  iVar9 = 0;
  *(uint *)(this + 0x18) = param_1;
  uVar10 = param_1;
  if (1 < param_1) {
    do {
      iVar9 = iVar9 + 1;
      bVar1 = 3 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar1);
  }
  uVar5 = iVar9 - 5;
  uVar11 = (ulong)*(uint *)(this + 0x34);
  *(uint *)(this + 0x1c) = param_1 - 1;
  iVar4 = 1 << (ulong)(uVar5 & 0x1f);
  uVar10 = 1 << (ulong)(uVar5 * 2 & 0x1f);
  uVar12 = (ulong)uVar10;
  *(uint *)this = uVar5;
  *(int *)(this + 4) = iVar4;
  *(uint *)(this + 0x10) = uVar10 - 1;
  *(int *)(this + 0x14) = iVar9;
  *(int *)(this + 8) = iVar4 + -1;
  *(uint *)(this + 0xc) = uVar10;
  pvVar7 = operator_new__((ulong)(*(uint *)(this + 0x34) << (ulong)(uVar5 * 2 & 0x1f)) << 3);
  *(void **)(this + 0x28) = pvVar7;
  memset(pvVar7,0,uVar12 * uVar11 * 8);
  *(undefined4 *)(this + 0x30) = 0;
  local_6c[0] = 0;
  if (param_2) {
    local_6c[0] = ~(ushort)(-1 << (ulong)(*(uint *)(this + 0x20) & 0x1f));
  }
  uVar10 = 0;
  do {
    if ((int)uVar11 != 0) {
      piVar13 = (int *)(this + 0x40);
      uVar12 = 0;
      do {
        uVar2 = uVar12 + 1;
        piVar3 = piVar13;
        if (uVar11 <= uVar2) {
          piVar3 = (int *)(this + 0x20);
        }
        uVar8 = ChunkedBitSquareChunk::createChunk(0,*piVar3 - piVar13[-2],local_6c,1);
        uVar11 = (ulong)*(uint *)(this + 0x34);
        piVar13 = piVar13 + 2;
        *(undefined8 *)
         (*(long *)(this + 0x28) + (ulong)((int)uVar12 + uVar10 * *(uint *)(this + 0x34)) * 8) =
             uVar8;
        uVar12 = uVar2;
      } while (uVar2 < uVar11);
      uVar12 = (ulong)*(uint *)(this + 0xc);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < (uint)uVar12);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


