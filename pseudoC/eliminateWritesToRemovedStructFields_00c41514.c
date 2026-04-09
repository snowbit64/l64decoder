// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eliminateWritesToRemovedStructFields
// Entry Point: 00c41514
// Size: 248 bytes
// Signature: undefined __thiscall eliminateWritesToRemovedStructFields(IR_Section * this, IR_TypeSet * param_1)


/* IR_Section::eliminateWritesToRemovedStructFields(IR_TypeSet*) */

void __thiscall
IR_Section::eliminateWritesToRemovedStructFields(IR_Section *this,IR_TypeSet *param_1)

{
  void *__dest;
  uint uVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar3) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + uVar5 * 8);
      uVar1 = *(uint *)puVar4;
      if (((uVar1 & 0xfffffffd) == 0xd) &&
         (uVar2 = chainAccessesRemovedField(this,(uint *)puVar4,1,param_1), (uVar2 & 1) != 0)) {
        if (uVar1 == 0xd) {
          __dest = (void *)(*(long *)(this + 0x20) + uVar5 * 8);
          __n = *(long *)(this + 0x28) - (long)(void *)((long)__dest + 8);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 8),__n);
          }
          uVar6 = uVar6 - 1;
          *(size_t *)(this + 0x28) = (long)__dest + __n;
          operator_delete__(puVar4);
        }
        else {
          *puVar4 = 0x100010000001a;
          *(undefined4 *)((long)puVar4 + 0xc) =
               *(undefined4 *)
                ((long)puVar4 + ((ulong)(*(uint *)((long)puVar4 + 4) >> 0xe) & 0x3fffc) + 0xc);
        }
      }
      lVar3 = *(long *)(this + 0x20);
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)uVar6;
    } while (uVar5 < (ulong)(*(long *)(this + 0x28) - lVar3 >> 3));
  }
  return;
}


