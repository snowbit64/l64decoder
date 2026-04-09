// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseAttributes
// Entry Point: 00dffac4
// Size: 716 bytes
// Signature: undefined __thiscall ParseAttributes(XMLElement * this, char * param_1, int * param_2)


/* tinyxml2::XMLElement::ParseAttributes(char*, int*) */

byte * __thiscall tinyxml2::XMLElement::ParseAttributes(XMLElement *this,char *param_1,int *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  XMLError XVar4;
  undefined8 *this_00;
  char *__s2;
  char *__s1;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  puVar10 = (undefined8 *)0x0;
LAB_00dffb28:
  if (-1 < *param_1) {
    uVar6 = (uint)(byte)*param_1;
    if (param_2 == (int *)0x0) {
      do {
        if ((uVar6 != 0x20) && (4 < uVar6 - 9)) goto LAB_00dffb94;
        param_1 = (char *)((byte *)param_1 + 1);
        uVar6 = (uint)(byte)*param_1;
      } while (-1 < *param_1);
    }
    else {
      do {
        if ((uVar6 != 0x20) && (4 < uVar6 - 9)) goto LAB_00dffb94;
        if (uVar6 == 10) {
          *param_2 = *param_2 + 1;
        }
        param_1 = (char *)((byte *)param_1 + 1);
        uVar6 = (uint)(byte)*param_1;
      } while (-1 < *param_1);
    }
  }
  goto LAB_00dffbc8;
LAB_00dffb94:
  if (uVar6 == 0) {
    uVar1 = *(undefined8 *)(this + 8);
    uVar6 = *(uint *)(this + 0x30);
    lVar7 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar7 == 0) {
      uVar5 = StrPair::GetStr();
    }
    else {
      uVar5 = 0;
    }
    XVar4 = (XMLError)uVar1;
    iVar3 = 6;
    goto LAB_00dffcdc;
  }
  if ((uVar6 & 0xdf) - 0x5b < 0xffffffe6) {
    if (uVar6 < 0x3e) {
      if (uVar6 != 0x3a) {
        if ((uVar6 == 0x2f) && (((byte *)param_1)[1] == 0x3e)) {
          *(undefined4 *)(this + 0x68) = 1;
          return (byte *)param_1 + 2;
        }
LAB_00dffd78:
        XMLDocument::SetError
                  ((XMLError)*(undefined8 *)(this + 8),6,(char *)(ulong)*(uint *)(this + 0x30),0);
        return (byte *)0x0;
      }
    }
    else if (uVar6 != 0x5f) {
      if (uVar6 == 0x3e) {
        return (byte *)param_1 + 1;
      }
      goto LAB_00dffd78;
    }
  }
LAB_00dffbc8:
  this_00 = (undefined8 *)MemPoolT<80>::Alloc();
  *(undefined4 *)(this_00 + 4) = 0;
  this_00[2] = 0;
  this_00[3] = 0;
  *(undefined4 *)(this_00 + 7) = 0;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[8] = 0;
  this_00[9] = 0;
  lVar7 = *(long *)(this + 8);
  *this_00 = &PTR__XMLAttribute_01013818;
  *(undefined4 *)(this_00 + 1) = 0;
  lVar8 = *(long *)(lVar7 + 0x188);
  this_00[9] = lVar7 + 0x188;
  (**(code **)(lVar8 + 0x28))();
  uVar6 = *(uint *)(*(long *)(this + 8) + 0xa0);
  bVar2 = *(bool *)(*(long *)(this + 8) + 0x69);
  *(uint *)(this_00 + 7) = uVar6;
  param_1 = (char *)XMLAttribute::ParseDeep((XMLAttribute *)this_00,param_1,bVar2,param_2);
  if ((byte *)param_1 == (byte *)0x0) {
LAB_00dffc78:
    plVar9 = (long *)this_00[9];
    (**(code **)*this_00)(this_00);
    (**(code **)(*plVar9 + 0x20))(plVar9,this_00);
    uVar1 = *(undefined8 *)(this + 8);
    lVar7 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar7 == 0) {
      uVar5 = StrPair::GetStr();
    }
    else {
      uVar5 = 0;
    }
    XVar4 = (XMLError)uVar1;
    iVar3 = 7;
LAB_00dffcdc:
    XMLDocument::SetError(XVar4,iVar3,(char *)(ulong)uVar6,"XMLElement name=%s",uVar5);
    return (byte *)0x0;
  }
  __s2 = (char *)StrPair::GetStr();
  for (lVar7 = *(long *)(this + 0x70); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x40)) {
    __s1 = (char *)StrPair::GetStr();
    if ((__s1 == __s2) || (iVar3 = strncmp(__s1,__s2,0x7fffffff), iVar3 == 0)) {
      lVar7 = StrPair::GetStr();
      if (lVar7 != 0) goto LAB_00dffc78;
      break;
    }
  }
  plVar9 = (long *)(this + 0x70);
  if (puVar10 != (undefined8 *)0x0) {
    plVar9 = puVar10 + 8;
  }
  *plVar9 = (long)this_00;
  puVar10 = this_00;
  goto LAB_00dffb28;
}


