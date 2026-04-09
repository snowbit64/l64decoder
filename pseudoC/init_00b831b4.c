// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b831b4
// Size: 240 bytes
// Signature: undefined __thiscall init(BitVector * this, BitVector * param_1)


/* BitVector::init(BitVector&) */

void __thiscall BitVector::init(BitVector *this,BitVector *param_1)

{
  BitVector BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  BVar1 = param_1[0xc];
  uVar2 = *(int *)(param_1 + 8) + 7U >> 3;
  this[0xc] = BVar1;
  if (BVar1 != (BitVector)0x0) {
    uVar2 = uVar2 + 3;
  }
  uVar3 = uVar2 + 0xffff >> 0x10;
  uVar4 = uVar3 - 1;
  pvVar5 = operator_new__((ulong)(uVar3 << 3));
  uVar8 = 0;
  *(void **)this = pvVar5;
  uVar9 = uVar8;
  if (uVar4 != 0) {
    do {
      pvVar6 = operator_new__(0x10000);
      *(void **)((long)pvVar5 + uVar8) = pvVar6;
      memcpy(*(void **)(*(long *)this + uVar8),*(void **)(*(long *)param_1 + uVar8),0x10000);
      pvVar5 = *(void **)this;
      uVar8 = uVar8 + 8;
      uVar9 = (ulong)uVar4;
    } while ((ulong)uVar4 * 8 - uVar8 != 0);
  }
  uVar8 = (ulong)(uVar2 + uVar4 * -0x10000);
  pvVar6 = operator_new__(uVar8);
  lVar7 = uVar9 * 8;
  *(void **)((long)pvVar5 + lVar7) = pvVar6;
  memcpy(*(void **)(*(long *)this + lVar7),*(void **)(*(long *)param_1 + lVar7),uVar8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


