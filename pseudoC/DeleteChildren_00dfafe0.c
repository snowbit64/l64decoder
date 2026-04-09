// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteChildren
// Entry Point: 00dfafe0
// Size: 268 bytes
// Signature: undefined DeleteChildren(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLNode::DeleteChildren() */

void tinyxml2::XMLNode::DeleteChildren(void)

{
  uint uVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  
  pplVar8 = (long **)(in_x0 + 0x38);
  plVar6 = *pplVar8;
  do {
    if (plVar6 == (long *)0x0) {
      *pplVar8 = (long *)0x0;
      *(undefined8 *)(in_x0 + 0x40) = 0;
      return;
    }
    lVar3 = plVar6[10];
    lVar2 = plVar6[9];
    *(long *)(in_x0 + 0x38) = lVar3;
    if (*(long **)(in_x0 + 0x40) == plVar6) {
      *(long *)(in_x0 + 0x40) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x50) = lVar3;
      lVar3 = plVar6[10];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x48) = lVar2;
    }
    plVar6[2] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    lVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
    if (lVar2 == 0) {
      lVar2 = plVar6[1];
      uVar1 = *(uint *)(lVar2 + 0x104);
      uVar4 = (ulong)uVar1;
      pplVar5 = *(long ***)(lVar2 + 0xa8);
      if (0 < (int)uVar1) {
        do {
          if (*pplVar5 == plVar6) {
            plVar7 = (*(long ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
            *(uint *)(lVar2 + 0x104) = uVar1 - 1;
            *pplVar5 = plVar7;
            break;
          }
          uVar4 = uVar4 - 1;
          pplVar5 = pplVar5 + 1;
        } while (uVar4 != 0);
      }
    }
    plVar7 = (long *)plVar6[0xc];
    (**(code **)(*plVar6 + 0x78))(plVar6);
    (**(code **)(*plVar7 + 0x20))(plVar7,plVar6);
    plVar6 = *pplVar8;
  } while( true );
}


