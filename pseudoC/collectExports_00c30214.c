// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectExports
// Entry Point: 00c30214
// Size: 392 bytes
// Signature: undefined __cdecl collectExports(ConversionContext * param_1, IR_Section * param_2)


/* IR_HllConvertUtil::collectExports(IR_HllConvertUtil::ConversionContext&, IR_Section*) */

void IR_HllConvertUtil::collectExports(ConversionContext *param_1,IR_Section *param_2)

{
  IR_Section *pIVar1;
  IR_Section *pIVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_2 + 0x20);
  if ((int)((ulong)(*(long *)(param_2 + 0x28) - lVar3) >> 3) == 0) {
    return;
  }
  lVar5 = 0;
  lVar6 = ((ulong)(*(long *)(param_2 + 0x28) - lVar3) >> 3 & 0xffffffff) * 8 + -8;
  do {
    puVar4 = *(undefined4 **)(lVar3 + lVar5);
    switch(*puVar4) {
    case 2:
      pIVar1 = (IR_Section *)
               IR_InstructionSequence::getSection
                         ((IR_InstructionSequence *)param_2,
                          *(uint *)((long)puVar4 + ((ulong)((uint)puVar4[1] >> 0xe) & 0x3fffc) + 0xc
                                   ));
      pIVar2 = (IR_Section *)
               IR_InstructionSequence::getSection
                         ((IR_InstructionSequence *)param_2,
                          *(uint *)((long)puVar4 +
                                   ((ulong)((uint)puVar4[1] >> 0xe) & 0x3fffc) + 0x10));
      if (pIVar1 != (IR_Section *)0x0) {
        collectExports(param_1,pIVar1);
      }
      if (pIVar2 == (IR_Section *)0x0) break;
      goto LAB_00c30310;
    case 4:
      pIVar2 = (IR_Section *)
               IR_InstructionSequence::getSection
                         ((IR_InstructionSequence *)param_2,
                          *(uint *)((long)puVar4 + ((ulong)((uint)puVar4[1] >> 0xe) & 0x3fffc) + 0xc
                                   ));
LAB_00c30310:
      collectExports(param_1,pIVar2);
joined_r0x00c30354:
      if (lVar6 == lVar5) {
        return;
      }
      goto LAB_00c30368;
    case 0x16:
      param_1[(ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x80) +
                               ((ulong)*(uint *)((long)puVar4 +
                                                ((ulong)((uint)puVar4[1] >> 0xe) & 0x3fffc) + 8) &
                               0x7fffffff) * 0x18 + 8) + 0x20] = (ConversionContext)0x1;
      goto joined_r0x00c30354;
    case 0x17:
      param_1[0x24] = (ConversionContext)0x1;
      break;
    case 0x18:
      param_1[0x25] = (ConversionContext)0x1;
    }
    if (lVar6 == lVar5) {
      return;
    }
LAB_00c30368:
    lVar3 = *(long *)(param_2 + 0x20);
    lVar5 = lVar5 + 8;
  } while( true );
}


