// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeepClone
// Entry Point: 00dfb24c
// Size: 380 bytes
// Signature: undefined __thiscall DeepClone(XMLNode * this, XMLDocument * param_1)


/* tinyxml2::XMLNode::DeepClone(tinyxml2::XMLDocument*) const */

long __thiscall tinyxml2::XMLNode::DeepClone(XMLNode *this,XMLDocument *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  XMLNode *this_00;
  
  lVar2 = (**(code **)(*(long *)this + 0x60))();
  if ((lVar2 != 0) && (this_00 = *(XMLNode **)(this + 0x38), this_00 != (XMLNode *)0x0)) {
    do {
      lVar3 = DeepClone(this_00,param_1);
      lVar4 = *(long *)(lVar3 + 8);
      if (lVar4 == *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar3 + 0x10);
        if (lVar5 == 0) {
          uVar1 = *(uint *)(lVar4 + 0x104);
          uVar6 = (ulong)uVar1;
          plVar8 = *(long **)(lVar4 + 0xa8);
          if (0 < (int)uVar1) {
            do {
              if (*plVar8 == lVar3) {
                lVar5 = (*(long **)(lVar4 + 0xa8))[(int)(uVar1 - 1)];
                *(uint *)(lVar4 + 0x104) = uVar1 - 1;
                *plVar8 = lVar5;
                break;
              }
              uVar6 = uVar6 - 1;
              plVar8 = plVar8 + 1;
            } while (uVar6 != 0);
          }
          (**(code **)(**(long **)(lVar3 + 0x60) + 0x28))();
        }
        else {
          if (*(long *)(lVar5 + 0x38) == lVar3) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar3 + 0x50);
            lVar7 = *(long *)(lVar5 + 0x40);
            lVar4 = *(long *)(lVar3 + 0x48);
          }
          else {
            lVar7 = *(long *)(lVar5 + 0x40);
            lVar4 = *(long *)(lVar3 + 0x48);
          }
          if (lVar7 == lVar3) {
            *(long *)(lVar5 + 0x40) = lVar4;
          }
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
          }
          if (*(long *)(lVar3 + 0x50) != 0) {
            *(long *)(*(long *)(lVar3 + 0x50) + 0x48) = lVar4;
          }
          *(undefined8 *)(lVar3 + 0x48) = 0;
          *(undefined8 *)(lVar3 + 0x50) = 0;
        }
        lVar4 = *(long *)(lVar2 + 0x40);
        plVar8 = (long *)(lVar2 + 0x40);
        if (lVar4 != 0) {
          plVar8 = (long *)(lVar4 + 0x50);
        }
        lVar5 = 0x38;
        if (lVar4 != 0) {
          lVar5 = 0x40;
        }
        *plVar8 = lVar3;
        *(long *)(lVar2 + lVar5) = lVar3;
        *(long *)(lVar3 + 0x48) = lVar4;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      this_00 = *(XMLNode **)(this_00 + 0x50);
    } while (this_00 != (XMLNode *)0x0);
  }
  return lVar2;
}


