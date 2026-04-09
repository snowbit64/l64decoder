// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initParams
// Entry Point: 00e4492c
// Size: 352 bytes
// Signature: undefined __thiscall initParams(FilterInstance * this, int param_1)


/* SoLoud::FilterInstance::initParams(int) */

undefined8 __thiscall SoLoud::FilterInstance::initParams(FilterInstance *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  pvVar2 = *(void **)(this + 0x10);
  *(int *)(this + 8) = param_1;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  uVar1 = *(uint *)(this + 8);
  puVar3 = (undefined4 *)operator_new__((ulong)uVar1 << 2);
  uVar10 = (ulong)uVar1 * 0x30;
  *(undefined4 **)(this + 0x10) = puVar3;
  pvVar2 = operator_new__(uVar10);
  if (uVar1 == 0) {
    *(void **)(this + 0x18) = pvVar2;
  }
  else {
    lVar9 = 0;
    do {
      Fader::Fader((Fader *)((long)pvVar2 + lVar9));
      lVar9 = lVar9 + 0x30;
    } while (uVar10 - lVar9 != 0);
    puVar3 = *(undefined4 **)(this + 0x10);
    *(void **)(this + 0x18) = pvVar2;
    if (puVar3 == (undefined4 *)0x0) {
      operator_delete__(pvVar2);
      *(undefined4 *)(this + 8) = 0;
      *(void **)(this + 0x10) = (void *)0x0;
      *(undefined8 *)(this + 0x18) = 0;
      return 5;
    }
  }
  uVar1 = *(uint *)(this + 8);
  uVar10 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar10 & 0xfffffff8;
      puVar5 = (undefined8 *)(puVar3 + 4);
      puVar6 = (undefined4 *)((long)pvVar2 + 0xe8);
      uVar8 = uVar4;
      do {
        puVar5[-1] = 0;
        puVar5[-2] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        uVar8 = uVar8 - 8;
        puVar6[-0x30] = 0;
        puVar5 = puVar5 + 4;
        puVar6[-0x24] = 0;
        puVar6[-0x18] = 0;
        puVar6[-0xc] = 0;
        *puVar6 = 0;
        puVar6[0xc] = 0;
        puVar6[0x18] = 0;
        puVar6[0x24] = 0;
        puVar6 = puVar6 + 0x60;
      } while (uVar8 != 0);
      if (uVar4 == uVar10) goto LAB_00e44a6c;
    }
    lVar9 = uVar10 - uVar4;
    puVar6 = puVar3 + uVar4;
    puVar7 = (undefined4 *)((long)pvVar2 + uVar4 * 0x30 + 0x28);
    do {
      lVar9 = lVar9 + -1;
      *puVar6 = 0;
      *puVar7 = 0;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (lVar9 != 0);
  }
LAB_00e44a6c:
  *puVar3 = 0x3f800000;
  return 0;
}


