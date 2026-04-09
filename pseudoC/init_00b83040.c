// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b83040
// Size: 240 bytes
// Signature: undefined __thiscall init(BitVector * this, uint param_1, bool param_2, bool param_3)


/* BitVector::init(unsigned int, bool, bool) */

void __thiscall BitVector::init(BitVector *this,uint param_1,bool param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int __c;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_1 + 7 >> 3;
  uVar1 = uVar2 + 3;
  if (!param_2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 0xffff >> 0x10;
  *(uint *)(this + 8) = param_1;
  uVar3 = uVar2 - 1;
  pvVar4 = operator_new__((ulong)(uVar2 << 3));
  __c = 0xff;
  if (!param_3) {
    __c = 0;
  }
  uVar6 = 0;
  *(void **)this = pvVar4;
  uVar7 = uVar6;
  if (uVar3 != 0) {
    do {
      pvVar5 = operator_new__(0x10000);
      *(void **)((long)pvVar4 + uVar6) = pvVar5;
      memset(*(void **)(*(long *)this + uVar6),__c,0x10000);
      pvVar4 = *(void **)this;
      uVar6 = uVar6 + 8;
      uVar7 = (ulong)uVar3;
    } while ((ulong)uVar3 * 8 - uVar6 != 0);
  }
  uVar6 = (ulong)(uVar1 + uVar3 * -0x10000);
  pvVar5 = operator_new__(uVar6);
  *(void **)((long)pvVar4 + uVar7 * 8) = pvVar5;
  memset(*(void **)(*(long *)this + uVar7 * 8),__c,uVar6);
  this[0xc] = (BitVector)param_2;
  return;
}


