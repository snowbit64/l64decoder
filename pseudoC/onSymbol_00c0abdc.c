// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSymbol
// Entry Point: 00c0abdc
// Size: 1276 bytes
// Signature: undefined __thiscall onSymbol(CreateIR * this, AST_SymbolNode * param_1)


/* CreateIR::onSymbol(AST_SymbolNode*) */

void __thiscall CreateIR::onSymbol(CreateIR *this,AST_SymbolNode *param_1)

{
  IR_InstructionSequence *pIVar1;
  long lVar2;
  __tree_const_iterator _Var3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  IR_Type *this_00;
  IR_Type *pIVar8;
  long lVar9;
  IR_Type *pIVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
  *this_01;
  long *plVar16;
  IR_TypeSet *this_02;
  int *piVar17;
  SHC_String *pSVar18;
  IR_OPCODE IVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  undefined auVar23 [16];
  undefined4 local_10a8;
  undefined8 local_10a0;
  undefined4 local_1078;
  undefined8 local_1070;
  int *piStack_1068;
  undefined8 local_1060;
  long lStack_1058;
  long local_1050;
  long lStack_1048;
  undefined8 local_1040;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar20 = *(long **)(this + 0x60);
  pSVar18 = *(SHC_String **)(param_1 + 0x50);
  lVar9 = *plVar20;
  lVar21 = (plVar20[1] - lVar9) * 0x20000000 >> 0x20;
  do {
    this_01 = *(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                **)(lVar9 + lVar21 * 8 + -8);
    _Var3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
            ::find<SHC_String>(this_01,pSVar18);
    if (this_01 + 8 ==
        (__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
         *)(ulong)_Var3) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = *(long **)((__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
                            *)(ulong)_Var3 + 0x40);
      if (plVar16 != (long *)0x0) break;
    }
    if (lVar21 < 2) break;
    lVar9 = *plVar20;
    lVar21 = lVar21 + -1;
  } while( true );
  if (plVar16 == (long *)0x0) {
    pbVar15 = *(byte **)(param_1 + 0x50);
    pbVar14 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar14 = pbVar15 + 1;
    }
    auVar23 = IR_TypeSet::findConstantBufferStructField
                        (*(IR_TypeSet **)(this + 0x68),(char *)pbVar14);
    uVar11 = auVar23._8_8_;
    pIVar10 = auVar23._0_8_;
    if (pIVar10 == (IR_Type *)0x0) {
      pbVar14 = *(byte **)(param_1 + 0x50);
      pcVar13 = "Variable \'%s\' not found";
      goto LAB_00c0ae3c;
    }
    if (*(long *)(this + 0x120) == *(long *)(this + 0x118)) goto LAB_00c0b0a0;
    this_00 = (IR_Type *)
              IR_TypeSet::getReferenceType(*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38),pIVar10);
    uVar5 = IR_Type::getNumIRRegisters();
    uVar7 = IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
    local_1070 = CONCAT44(local_1070._4_4_,uVar7);
    if (1 < uVar5) {
      uVar22 = 1;
      do {
        pIVar8 = (IR_Type *)
                 IR_Type::getIRRegisterType
                           (this_00,uVar22,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar8,(char *)0x0);
        uVar22 = uVar22 + 1;
      } while (uVar5 != uVar22);
    }
    pbVar14 = *(byte **)(pIVar10 + 8);
    pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
    local_10a8 = 0xc;
    local_10a0 = *(long **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      local_10a0 = (long *)(pbVar14 + 1);
    }
    uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_10a8);
    IR_InstructionSequence::emit(pIVar1,10,uVar7,uVar5 | 0x80000000);
    pbVar14 = *(byte **)(param_1 + 0x50);
    local_10a8 = 0xc;
    local_10a0 = *(long **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      local_10a0 = (long *)(pbVar14 + 1);
    }
    uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_10a8);
    pbVar15 = *(byte **)(param_1 + 0x50);
    this_02 = *(IR_TypeSet **)(this + 0x68);
    local_1040 = CONCAT44(local_1040._4_4_,1);
    local_1060 = CONCAT44(local_1060._4_4_,uVar4) | 0x80000000;
    pbVar14 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar14 = pbVar15 + 1;
    }
    lVar9 = IR_Struct::getField(*(IR_Struct **)(pIVar10 + 8),(char *)pbVar14,(uint *)0x0);
    piStack_1068 = (int *)IR_TypeSet::getReferenceType(this_02,*(IR_Type **)(lVar9 + 0x10));
    puVar12 = &local_1070;
  }
  else {
    auVar23 = (**(code **)(*plVar16 + 0x20))(plVar16);
    uVar11 = auVar23._8_8_;
    if ((auVar23 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      pbVar14 = *(byte **)(param_1 + 0x50);
      pcVar13 = "Symbol \'%s\' is not a variable";
LAB_00c0ae3c:
      pbVar15 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        pbVar15 = pbVar14 + 1;
      }
      FUN_00c0b0d8(&local_1070,uVar11,pcVar13,pbVar15);
      error(this,(char *)&local_1070);
      plVar20 = (long *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),0);
      uVar5 = IR_Type::getNumIRRegisters();
      local_10a8 = IR_RegisterSet::allocateReg
                             ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),(IR_Type *)plVar20,
                              (char *)0x0);
      local_1078 = 0;
      local_10a0 = plVar20;
      if (1 < uVar5) {
        uVar7 = 1;
        do {
          pIVar10 = (IR_Type *)
                    IR_Type::getIRRegisterType
                              ((IR_Type *)plVar20,uVar7,
                               *(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      puVar12 = (undefined8 *)&local_10a8;
    }
    else {
      if (*(long *)(this + 0x120) == *(long *)(this + 0x118)) goto LAB_00c0b0a0;
      if (*(IR_Type *)((long)plVar16 + 0x59) == (IR_Type)0x0) {
        piVar17 = (int *)plVar16[6];
        if (*piVar17 == 6) {
          uVar5 = IR_Type::getNumIRRegisters();
          iVar6 = IR_RegisterSet::allocateReg
                            ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),(IR_Type *)piVar17,
                             (char *)0x0);
          local_1070 = CONCAT44(local_1070._4_4_,iVar6);
          local_1040 = (ulong)local_1040._4_4_ << 0x20;
          piStack_1068 = piVar17;
          if (1 < uVar5) {
            uVar7 = 1;
            do {
              pIVar10 = (IR_Type *)
                        IR_Type::getIRRegisterType
                                  ((IR_Type *)piVar17,uVar7,
                                   *(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
              IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
              uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
          }
          pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
          local_10a0 = (long *)((ulong)local_10a0._4_4_ << 0x20);
          local_10a8 = 5;
          uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_10a8);
          IR_InstructionSequence::emit(pIVar1,0x1a,iVar6 + 1,uVar5 | 0x80000000);
          FUN_00c09960(this + 0x100,&local_1070);
          *(IR_Type *)((long)plVar16 + 0x59) = (IR_Type)0x1;
          plVar16[0x11] = lStack_1048;
          plVar16[0x10] = local_1050;
          plVar16[0xd] = (long)piStack_1068;
          plVar16[0xc] = local_1070;
          plVar16[0xf] = lStack_1058;
          plVar16[0xe] = local_1060;
          plVar16[0x12] = local_1040;
          goto LAB_00c0b0a0;
        }
        piVar17 = (int *)IR_TypeSet::getReferenceType
                                   (*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38),
                                    (IR_Type *)piVar17);
        uVar5 = IR_Type::getNumIRRegisters();
        uVar7 = IR_RegisterSet::allocateReg
                          ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),(IR_Type *)piVar17,
                           (char *)0x0);
        local_1070 = CONCAT44(local_1070._4_4_,uVar7);
        local_1040 = (ulong)local_1040._4_4_ << 0x20;
        piStack_1068 = piVar17;
        if (1 < uVar5) {
          uVar22 = 1;
          do {
            pIVar10 = (IR_Type *)
                      IR_Type::getIRRegisterType
                                ((IR_Type *)piVar17,uVar22,
                                 *(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
            IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
            uVar22 = uVar22 + 1;
          } while (uVar5 != uVar22);
        }
        pIVar1 = *(IR_InstructionSequence **)(this + 0x78);
        local_10a0 = plVar16;
        if (((byte)*(IR_Type *)((long)plVar16 + 0x39) & 1) == 0) {
          IVar19 = 10;
          local_10a8 = 10;
          uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_10a8);
        }
        else {
          local_10a8 = 10;
          uVar5 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_10a8);
          IVar19 = 0xb;
        }
        IR_InstructionSequence::emit(pIVar1,IVar19,uVar7,uVar5 | 0x80000000);
      }
      else {
        piStack_1068 = (int *)plVar16[0xd];
        local_1070 = plVar16[0xc];
        lStack_1058 = plVar16[0xf];
        local_1060 = plVar16[0xe];
        lStack_1048 = plVar16[0x11];
        local_1050 = plVar16[0x10];
        local_1040 = plVar16[0x12];
      }
      puVar12 = &local_1070;
    }
  }
  FUN_00c09960(this + 0x100,puVar12);
LAB_00c0b0a0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


