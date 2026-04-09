// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLNode
// Entry Point: 00e03864
// Size: 420 bytes
// Signature: undefined __thiscall ~XMLNode(XMLNode * this)


/* tinyxml2::XMLNode::~XMLNode() */

void __thiscall tinyxml2::XMLNode::~XMLNode(XMLNode *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  XMLNode *pXVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  
  pplVar9 = (long **)(this + 0x38);
  plVar7 = *pplVar9;
  *(undefined ***)this = &PTR_ToElement_01013288;
  do {
    if (plVar7 == (long *)0x0) {
      lVar2 = *(long *)(this + 0x10);
      *pplVar9 = (long *)0x0;
      *(undefined8 *)(this + 0x40) = 0;
      if (lVar2 != 0) {
        if (*(XMLNode **)(lVar2 + 0x38) == this) {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(this + 0x50);
          pXVar5 = *(XMLNode **)(lVar2 + 0x40);
          lVar3 = *(long *)(this + 0x48);
        }
        else {
          pXVar5 = *(XMLNode **)(lVar2 + 0x40);
          lVar3 = *(long *)(this + 0x48);
        }
        if (pXVar5 == this) {
          *(long *)(lVar2 + 0x40) = lVar3;
        }
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(this + 0x50);
        }
        if (*(long *)(this + 0x50) != 0) {
          *(long *)(*(long *)(this + 0x50) + 0x48) = lVar3;
        }
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x50) = 0;
      }
      if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      return;
    }
    lVar3 = plVar7[10];
    lVar2 = plVar7[9];
    *(long *)(this + 0x38) = lVar3;
    if (*(long **)(this + 0x40) == plVar7) {
      *(long *)(this + 0x40) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x50) = lVar3;
      lVar3 = plVar7[10];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x48) = lVar2;
    }
    plVar7[2] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
    if (lVar2 == 0) {
      lVar2 = plVar7[1];
      uVar1 = *(uint *)(lVar2 + 0x104);
      uVar4 = (ulong)uVar1;
      pplVar6 = *(long ***)(lVar2 + 0xa8);
      if (0 < (int)uVar1) {
        do {
          if (*pplVar6 == plVar7) {
            plVar8 = (*(long ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
            *(uint *)(lVar2 + 0x104) = uVar1 - 1;
            *pplVar6 = plVar8;
            break;
          }
          uVar4 = uVar4 - 1;
          pplVar6 = pplVar6 + 1;
        } while (uVar4 != 0);
      }
    }
    plVar8 = (long *)plVar7[0xc];
    (**(code **)(*plVar7 + 0x78))(plVar7);
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar7);
    plVar7 = *pplVar9;
  } while( true );
}


