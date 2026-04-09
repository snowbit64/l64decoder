// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectOperationInsAndOuts
// Entry Point: 00c0d9f4
// Size: 784 bytes
// Signature: undefined __thiscall collectOperationInsAndOuts(CreateIR * this, GsTFunction * param_1, IR_Type * param_2, SHC_Vector * param_3, vector * param_4, vector * param_5, vector * param_6, uint * param_7)


/* CreateIR::collectOperationInsAndOuts(GsTFunction*, IR_Type*, SHC_Vector<AST_Node*> const&,
   std::__ndk1::vector<IR_LValue, std::__ndk1::allocator<IR_LValue> >&,
   std::__ndk1::vector<IR_LValue, std::__ndk1::allocator<IR_LValue> >&,
   std::__ndk1::vector<IR_LValue, std::__ndk1::allocator<IR_LValue> >&, unsigned int&) */

void __thiscall
CreateIR::collectOperationInsAndOuts
          (CreateIR *this,GsTFunction *param_1,IR_Type *param_2,SHC_Vector *param_3,vector *param_4,
          vector *param_5,vector *param_6,uint *param_7)

{
  CreateIR CVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  IR_Type *pIVar5;
  vector *pvVar6;
  undefined8 *puVar7;
  IR_Type *pIVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 local_160;
  IR_Type *pIStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_120;
  IR_Type *pIStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  IR_Type *pIStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  IR_Type *pIStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *param_7 = 0;
  if ((*(uint *)param_2 | *(uint *)(param_2 + 8)) != 0) {
    uVar3 = IR_Type::getNumIRRegisters();
    uVar4 = IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),param_2,(char *)0x0);
    local_b0 = CONCAT44(local_b0._4_4_,uVar4);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pIStack_a8 = param_2;
    if (1 < uVar3) {
      uVar11 = 1;
      do {
        pIVar5 = (IR_Type *)
                 IR_Type::getIRRegisterType
                           (param_2,uVar11,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar5,(char *)0x0);
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    FUN_00c09960(param_5,&local_b0);
    FUN_00c09960(param_6,&local_b0);
    *param_7 = 1;
  }
  lVar9 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar9) {
    uVar10 = 0;
    do {
      if (param_1 == (GsTFunction *)0x0) {
        uVar3 = 0x400;
      }
      else {
        uVar11 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar10 * 0x18 + 0x10) +
                          0x10);
        uVar3 = 0x400;
        if ((uVar11 & 0xc00) != 0) {
          uVar3 = uVar11;
        }
      }
      uVar3 = uVar3 & 0xc00;
      CVar1 = this[0xe0];
      puVar7 = *(undefined8 **)(lVar9 + uVar10 * 8);
      this[0xe0] = (CreateIR)(uVar3 != 0x400);
      (**(code **)*puVar7)(puVar7,this + 8);
      lVar9 = *(long *)(this + 0x108);
      this[0xe0] = CVar1;
      local_80 = *(long *)(lVar9 + -8);
      uStack_88 = *(undefined8 *)(lVar9 + -0x10);
      local_90 = *(undefined8 *)(lVar9 + -0x18);
      pIStack_a8 = *(IR_Type **)(lVar9 + -0x30);
      local_b0 = *(undefined8 *)(lVar9 + -0x38);
      uStack_98 = *(undefined8 *)(lVar9 + -0x20);
      local_a0 = *(undefined8 *)(lVar9 + -0x28);
      *(long *)(this + 0x108) = lVar9 + -0x38;
      lVar9 = (**(code **)(**(long **)(*(long *)param_3 + uVar10 * 8) + 0x18))();
      pIVar5 = *(IR_Type **)(lVar9 + 0x20);
      if (uVar3 == 0x400) {
        pIStack_118 = pIStack_a8;
        local_120 = local_b0;
        uStack_108 = uStack_98;
        uStack_110 = local_a0;
        local_f0 = local_80;
        uStack_f8 = uStack_88;
        local_100 = local_90;
        resolveToValue(&local_e8,this,&local_120,pIVar5);
        local_b0 = CONCAT44(uStack_e4,local_e8);
        uStack_88 = uStack_c0;
        local_90 = uStack_c8;
        local_80 = CONCAT44(uStack_b4,local_b8);
        pIStack_a8 = pIStack_e0;
        uStack_98 = uStack_d0;
        local_a0 = local_d8;
        pvVar6 = param_4;
      }
      else {
        if (uVar3 == 0xc00) {
          pIStack_158 = pIStack_a8;
          local_160 = local_b0;
          uStack_148 = uStack_98;
          uStack_150 = local_a0;
          local_130 = local_80;
          uStack_138 = uStack_88;
          local_140 = local_90;
          resolveToValue(&local_e8,this,&local_160,pIVar5);
          FUN_00c09960(param_4,&local_e8);
        }
        else {
          uVar3 = IR_Type::getNumIRRegisters();
          local_e8 = IR_RegisterSet::allocateReg
                               ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar5,(char *)0x0
                               );
          local_b8 = 0;
          pIStack_e0 = pIVar5;
          if (1 < uVar3) {
            uVar11 = 1;
            do {
              pIVar8 = (IR_Type *)
                       IR_Type::getIRRegisterType
                                 (pIVar5,uVar11,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
              IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar8,(char *)0x0);
              uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
          }
        }
        FUN_00c09960(param_5,&local_e8);
        pvVar6 = param_6;
      }
      FUN_00c09960(pvVar6,&local_b0);
      lVar9 = *(long *)param_3;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(*(long *)(param_3 + 8) - lVar9 >> 3));
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


