// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growHashTable
// Entry Point: 009b3dd8
// Size: 208 bytes
// Signature: undefined __thiscall growHashTable(Bt2PhysicsOverlapCallback * this, uint param_1, uint param_2)


/* Bt2PhysicsOverlapCallback::growHashTable(unsigned int, unsigned int) */

void __thiscall
Bt2PhysicsOverlapCallback::growHashTable(Bt2PhysicsOverlapCallback *this,uint param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  void *__s;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong __n;
  
  uVar4 = *(uint *)(this + 0x10);
  if (param_1 < uVar4) {
    if (*(void **)(this + 0x38) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x38));
    }
    __n = (ulong)uVar4 << 2;
    __s = operator_new__(__n);
    *(void **)(this + 0x38) = __s;
    memset(__s,0xff,__n);
    if (param_2 != 0) {
      iVar2 = *(int *)(this + 0x10);
      uVar4 = 0;
      lVar5 = *(long *)(this + 0x18);
      do {
        plVar1 = (long *)(lVar5 + (long)(int)uVar4 * 0x20);
        uVar3 = *(uint *)(*plVar1 + 0x18) | *(int *)(plVar1[1] + 0x18) << 0x10;
        uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
        uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
        uVar3 = uVar3 ^ uVar3 >> 6;
        uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
        lVar6 = (ulong)((uVar3 ^ uVar3 >> 0x10) & iVar2 - 1U) * 4;
        *(undefined4 *)(plVar1 + 3) = *(undefined4 *)((long)__s + lVar6);
        *(uint *)((long)__s + lVar6) = uVar4;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
  }
  return;
}


