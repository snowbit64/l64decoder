// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scalarizeInst
// Entry Point: 00c4df5c
// Size: 848 bytes
// Signature: undefined __thiscall scalarizeInst(IR_Section * this, uint param_1, uint param_2, uint param_3, vector * param_4, bool * param_5)


/* IR_Section::scalarizeInst(unsigned int, unsigned int, unsigned int, std::__ndk1::vector<unsigned
   int, std::__ndk1::allocator<unsigned int> >&, bool&) */

ulong __thiscall
IR_Section::scalarizeInst
          (IR_Section *this,uint param_1,uint param_2,uint param_3,vector *param_4,bool *param_5)

{
  bool bVar1;
  IR_RegisterSet *this_00;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  IR_Type *pIVar10;
  void *__dest;
  size_t __n;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  void *__src;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  IR_TypeSet *this_01;
  ulong local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  uVar14 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar16 = *(long *)(*(long *)(this + 0x20) + uVar14 * 8);
  uVar6 = *(uint *)(lVar16 + 8);
  if (-1 < (int)uVar6) {
    this_00 = (IR_RegisterSet *)(*(long *)this + 0x98);
    this_01 = *(IR_TypeSet **)(*(long *)this + 0x38);
    puVar7 = (uint *)IR_RegisterSet::getRegisterType(this_00,uVar6);
    uVar11 = *puVar7;
    bVar1 = uVar11 - 1 < 2;
    if ((bVar1 && uVar11 < 2 || bVar1 && uVar11 == 2) && puVar7[2] - 3 < 6 ||
        (bVar1 && uVar11 < 2 || bVar1 && uVar11 == 2) && puVar7[2] - 3 == 6) {
      uVar11 = *(uint *)(lVar16 + (ulong)((uint)*(ushort *)(lVar16 + 6) + param_2 + 2) * 4);
      uVar15 = (ulong)uVar11;
      if ((((int)uVar11 < 0) ||
          (piVar8 = (int *)IR_RegisterSet::getRegisterType
                                     ((IR_RegisterSet *)(*(long *)this + 0x98),uVar11), *piVar8 == 0
          )) || (*(int *)(*(long *)param_4 + uVar15 * 4) != -1)) {
        if (param_3 == 0xffffffff) {
          local_a8 = 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(lVar16 + (ulong)(param_3 + *(ushort *)(lVar16 + 6) + 2) * 4);
          local_a8 = (ulong)uVar5;
          if (((-1 < (int)uVar5) &&
              (piVar8 = (int *)IR_RegisterSet::getRegisterType
                                         ((IR_RegisterSet *)(*(long *)this + 0x98),uVar5),
              *piVar8 != 0)) && (*(int *)(*(long *)param_4 + local_a8 * 4) == -1))
          goto LAB_00c4e260;
        }
        lVar9 = IR_RegisterSet::getRegisterType(this_00,uVar6);
        pIVar10 = (IR_Type *)IR_TypeSet::getScalarType(this_01,*(GsTBasicType *)(lVar9 + 8));
        uVar5 = IR_RegisterSet::allocateReg(this_00,pIVar10,(char *)0x0);
        puVar2 = *(undefined4 **)(param_4 + 8);
        if (puVar2 < *(undefined4 **)(param_4 + 0x10)) {
          *puVar2 = 0xffffffff;
          *(undefined4 **)(param_4 + 8) = puVar2 + 1;
        }
        else {
          __src = *(void **)param_4;
          __n = (long)puVar2 - (long)__src;
          uVar14 = ((long)__n >> 2) + 1;
          if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar12 = (long)*(undefined4 **)(param_4 + 0x10) - (long)__src;
          uVar13 = (long)uVar12 >> 1;
          if (uVar14 <= uVar13) {
            uVar14 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar12) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar14 << 2);
          }
          puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
          *puVar2 = 0xffffffff;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_4 = __dest;
          *(undefined4 **)(param_4 + 8) = puVar2 + 1;
          *(void **)(param_4 + 0x10) = (void *)((long)__dest + uVar14 * 4);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        uVar14 = (ulong)(param_1 + 1);
        IR_InstructionSequence::emitInsert
                  ((IR_InstructionSequence *)this,param_1 + 1,0x12,uVar6,uVar5);
        lVar9 = *(long *)param_4;
        *(uint *)(lVar9 + (ulong)uVar6 * 4) = uVar5;
        *(uint *)(lVar16 + 8) = uVar5;
        if ((int)uVar11 < 0) {
          puVar3 = (undefined8 *)
                   (*(long *)(*(IR_Function **)this + 0x80) + (uVar15 & 0x7fffffff) * 0x18);
          uStack_78 = puVar3[1];
          local_80 = *puVar3;
          uVar6 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_80);
          uVar11 = uVar6 | 0x80000000;
        }
        else {
          uVar6 = *(uint *)(lVar9 + uVar15 * 4);
          if (uVar6 != 0xffffffff) {
            uVar11 = uVar6;
          }
        }
        *(uint *)(lVar16 + (ulong)((uint)*(ushort *)(lVar16 + 6) + param_2 + 2) * 4) = uVar11;
        if (param_3 != 0xffffffff) {
          uVar6 = (uint)local_a8;
          if ((int)uVar6 < 0) {
            puVar3 = (undefined8 *)
                     (*(long *)(*(IR_Function **)this + 0x80) + (ulong)(uVar6 & 0x7fffffff) * 0x18);
            uStack_78 = puVar3[1];
            local_80 = *puVar3;
            uVar6 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_80);
            uVar6 = uVar6 | 0x80000000;
          }
          else {
            uVar11 = *(uint *)(*(long *)param_4 + local_a8 * 4);
            if (uVar11 != 0xffffffff) {
              uVar6 = uVar11;
            }
          }
          *(uint *)(lVar16 + (ulong)(param_3 + *(ushort *)(lVar16 + 6) + 2) * 4) = uVar6;
        }
        *param_5 = true;
      }
    }
  }
LAB_00c4e260:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


