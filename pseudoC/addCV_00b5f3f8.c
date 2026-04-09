// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCV
// Entry Point: 00b5f3f8
// Size: 256 bytes
// Signature: undefined __thiscall addCV(Spline * this, uint param_1, float * param_2)


/* Spline::addCV(unsigned int, float const*) */

void __thiscall Spline::addCV(Spline *this,uint param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = *(int *)(this + 0x20);
  pvVar8 = *(void **)(this + 0x18);
  uVar1 = *(int *)(this + 0x28) + 1 + iVar7 + *(int *)(this + 0x24);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  pvVar5 = operator_new__((ulong)(uVar1 * 3) << 2);
  *(void **)(this + 0x18) = pvVar5;
  if (uVar1 != 0) {
    uVar2 = iVar7 + param_1;
    uVar6 = 0;
    iVar7 = 0;
    uVar3 = uVar2 * 3;
    do {
      if ((ulong)uVar2 * 3 == uVar6) {
        fVar9 = param_2[1];
        fVar10 = param_2[2];
        *(float *)((long)pvVar5 + (ulong)uVar3 * 4) = *param_2;
        *(float *)((long)pvVar5 + (ulong)(uVar3 + 1) * 4) = fVar9;
        *(float *)((long)pvVar5 + (ulong)(uVar3 + 2) * 4) = fVar10;
      }
      else {
        uVar4 = iVar7 * 3;
        iVar7 = iVar7 + 1;
        *(undefined4 *)((long)pvVar5 + (uVar6 & 0xffffffff) * 4) =
             *(undefined4 *)((long)pvVar8 + (ulong)uVar4 * 4);
        *(undefined4 *)((long)pvVar5 + (ulong)((int)uVar6 + 1) * 4) =
             *(undefined4 *)((long)pvVar8 + (ulong)(uVar4 + 1) * 4);
        *(undefined4 *)((long)pvVar5 + (ulong)((int)uVar6 + 2) * 4) =
             *(undefined4 *)((long)pvVar8 + (ulong)(uVar4 + 2) * 4);
      }
      uVar6 = uVar6 + 3;
    } while ((ulong)uVar1 + (ulong)uVar1 * 2 != uVar6);
  }
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
    return;
  }
  return;
}


