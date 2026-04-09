// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: promote
// Entry Point: 00c16488
// Size: 432 bytes
// Signature: undefined __cdecl promote(GISLParserContext * param_1)


/* AST_UnaryNode::promote(GISLParserContext&) */

undefined8 AST_UnaryNode::promote(GISLParserContext *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  switch(*(int *)(param_1 + 0x48)) {
  case 6:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    lVar2 = *(long *)(param_1 + 0x50);
    if ((**(int **)(lVar2 + 0x20) < 3) && ((*(int **)(lVar2 + 0x20))[2] != 9)) {
LAB_00c16600:
      uVar1 = *(undefined8 *)(lVar2 + 0x38);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      return 1;
    }
    break;
  case 7:
    lVar2 = *(long *)(param_1 + 0x50);
    if ((**(int **)(lVar2 + 0x20) < 3) && ((*(int **)(lVar2 + 0x20))[2] == 9)) goto LAB_00c16600;
    break;
  case 8:
    lVar2 = *(long *)(param_1 + 0x50);
    if ((**(int **)(lVar2 + 0x20) < 3) && ((*(int **)(lVar2 + 0x20))[2] - 5U < 4))
    goto LAB_00c16600;
    break;
  case 9:
    lVar2 = *(long *)(param_1 + 0x50);
    if (**(int **)(lVar2 + 0x20) == 6) {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      if (**(int **)(param_1 + 0x20) != 6) {
        return 1;
      }
      uVar1 = *(undefined8 *)(*(int **)(param_1 + 0x20) + 2);
LAB_00c165cc:
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x40) = 0;
      return 1;
    }
    break;
  case 10:
    lVar2 = *(long *)(param_1 + 0x50);
    if (**(int **)(lVar2 + 0x20) == 7) {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uVar6 = *(undefined8 *)(lVar2 + 0x40);
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      uVar1 = IR_TypeSet::getPointerType
                        (*(IR_TypeSet **)(param_1 + 0x18),*(IR_Type **)(param_1 + 0x20));
      goto LAB_00c165cc;
    }
    break;
  default:
    if (*(int *)(param_1 + 0x48) == 0x87) {
      lVar2 = *(long *)(param_1 + 0x50);
      if (**(int **)(lVar2 + 0x20) == 4) goto LAB_00c16600;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x50);
      if ((**(int **)(lVar2 + 0x20) < 3) && ((*(int **)(lVar2 + 0x20))[2] - 3U < 2))
      goto LAB_00c16600;
    }
  }
  return 0;
}


