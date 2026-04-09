// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00e0097c
// Size: 332 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::Clear() */

void tinyxml2::XMLDocument::Clear(void)

{
  int iVar1;
  uint uVar2;
  XMLDocument *in_x0;
  XMLDocument *this;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  
  pplVar9 = (long **)(in_x0 + 0x38);
  plVar7 = *pplVar9;
  this = in_x0;
  do {
    if (plVar7 == (long *)0x0) {
      iVar1 = *(int *)(in_x0 + 0x104);
      *pplVar9 = (long *)0x0;
      *(undefined8 *)(in_x0 + 0x40) = 0;
      while (iVar1 != 0) {
        this = (XMLDocument *)DeleteNode(this,**(XMLNode ***)(in_x0 + 0xa8));
        iVar1 = *(int *)(in_x0 + 0x104);
      }
      SetError((XMLError)in_x0,0,(char *)0x0,0);
      if (*(void **)(in_x0 + 0x98) != (void *)0x0) {
        operator_delete__(*(void **)(in_x0 + 0x98));
      }
      *(undefined8 *)(in_x0 + 0x98) = 0;
      *(undefined4 *)(in_x0 + 0xa4) = 0;
      return;
    }
    lVar4 = plVar7[10];
    lVar3 = plVar7[9];
    *(long *)(in_x0 + 0x38) = lVar4;
    if (*(long **)(in_x0 + 0x40) == plVar7) {
      *(long *)(in_x0 + 0x40) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x50) = lVar4;
      lVar4 = plVar7[10];
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x48) = lVar3;
    }
    plVar7[2] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    lVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
    if (lVar3 == 0) {
      lVar3 = plVar7[1];
      uVar2 = *(uint *)(lVar3 + 0x104);
      uVar5 = (ulong)uVar2;
      pplVar6 = *(long ***)(lVar3 + 0xa8);
      if (0 < (int)uVar2) {
        do {
          if (*pplVar6 == plVar7) {
            plVar8 = (*(long ***)(lVar3 + 0xa8))[(int)(uVar2 - 1)];
            *(uint *)(lVar3 + 0x104) = uVar2 - 1;
            *pplVar6 = plVar8;
            break;
          }
          uVar5 = uVar5 - 1;
          pplVar6 = pplVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    plVar8 = (long *)plVar7[0xc];
    (**(code **)(*plVar7 + 0x78))(plVar7);
    this = (XMLDocument *)(**(code **)(*plVar8 + 0x20))(plVar8,plVar7);
    plVar7 = *pplVar9;
  } while( true );
}


