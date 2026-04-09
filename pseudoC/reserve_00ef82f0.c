// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00ef82f0
// Size: 412 bytes
// Signature: undefined __thiscall reserve(vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>> * this, ulong param_1)


/* std::__ndk1::vector<Luau::BytecodeBuilder::Function,
   std::__ndk1::allocator<Luau::BytecodeBuilder::Function> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>::
reserve(vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>
        *this,ulong param_1)

{
  long lVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  
  pvVar7 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar7 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    if (0x2e8ba2e8ba2e8ba < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar8 = *(void **)(this + 8);
    pvVar3 = operator_new(param_1 * 0x58);
    lVar1 = (long)pvVar3 + ((long)pvVar8 - (long)pvVar7);
    pvVar3 = (void *)((long)pvVar3 + param_1 * 0x58);
    lVar4 = lVar1;
    if ((long)pvVar8 - (long)pvVar7 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        uVar9 = *(undefined8 *)((long)pvVar8 + -0x50);
        uVar6 = *(undefined8 *)((long)pvVar8 + -0x58);
        *(undefined8 *)(lVar4 + -0x48) = *(undefined8 *)((long)pvVar8 + -0x48);
        *(undefined8 *)(lVar4 + -0x50) = uVar9;
        *(undefined8 *)(lVar4 + -0x58) = uVar6;
        *(undefined8 *)((long)pvVar8 + -0x50) = 0;
        *(undefined8 *)((long)pvVar8 + -0x48) = 0;
        uVar6 = *(undefined8 *)((long)pvVar8 + -0x40);
        *(undefined8 *)((long)pvVar8 + -0x58) = 0;
        *(undefined4 *)(lVar4 + -0x38) = *(undefined4 *)((long)pvVar8 + -0x38);
        *(undefined8 *)(lVar4 + -0x40) = uVar6;
        uVar9 = *(undefined8 *)((long)pvVar8 + -0x28);
        uVar6 = *(undefined8 *)((long)pvVar8 + -0x30);
        *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)((long)pvVar8 + -0x20);
        *(undefined8 *)(lVar4 + -0x28) = uVar9;
        *(undefined8 *)(lVar4 + -0x30) = uVar6;
        *(undefined8 *)((long)pvVar8 + -0x28) = 0;
        *(undefined8 *)((long)pvVar8 + -0x20) = 0;
        uVar9 = *(undefined8 *)((long)pvVar8 + -0x10);
        uVar6 = *(undefined8 *)((long)pvVar8 + -0x18);
        *(undefined8 *)((long)pvVar8 + -0x30) = 0;
        *(undefined8 *)(lVar4 + -8) = *(undefined8 *)((long)pvVar8 + -8);
        pvVar5 = (void *)((long)pvVar8 + -0x58);
        *(undefined8 *)(lVar4 + -0x10) = uVar9;
        *(undefined8 *)(lVar4 + -0x18) = uVar6;
        lVar4 = lVar4 + -0x58;
        *(undefined8 *)((long)pvVar8 + -0x18) = 0;
        *(undefined8 *)((long)pvVar8 + -0x10) = 0;
        *(undefined8 *)((long)pvVar8 + -8) = 0;
        pvVar8 = pvVar5;
      } while (pvVar5 != pvVar7);
      pvVar7 = *(void **)this;
      pvVar8 = *(void **)(this + 8);
      *(long *)this = lVar4;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar3;
      for (; pvVar8 != pvVar7; pvVar8 = (void *)((long)pvVar8 + -0x58)) {
        if ((*(byte *)((long)pvVar8 + -0x18) & 1) == 0) {
          if ((*(byte *)((long)pvVar8 + -0x30) & 1) != 0) goto LAB_00ef8444;
LAB_00ef8424:
          bVar2 = *(byte *)((long)pvVar8 + -0x58);
        }
        else {
          operator_delete(*(void **)((long)pvVar8 + -8));
          if ((*(byte *)((long)pvVar8 + -0x30) & 1) == 0) goto LAB_00ef8424;
LAB_00ef8444:
          operator_delete(*(void **)((long)pvVar8 + -0x20));
          bVar2 = *(byte *)((long)pvVar8 + -0x58);
        }
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -0x48));
        }
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      return;
    }
  }
  return;
}


