// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parse
// Entry Point: 00e016b0
// Size: 808 bytes
// Signature: undefined __thiscall Parse(XMLDocument * this, char * param_1, ulong param_2)


/* tinyxml2::XMLDocument::Parse(char const*, unsigned long) */

undefined4 __thiscall tinyxml2::XMLDocument::Parse(XMLDocument *this,char *param_1,ulong param_2)

{
  byte bVar1;
  byte *__dest;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  
  Clear();
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    SetError((XMLError)this,0xd,(char *)0x0,0);
    goto LAB_00e0177c;
  }
  if (param_2 == 0xffffffffffffffff) {
    param_2 = strlen(param_1);
  }
  __dest = (byte *)operator_new__(param_2 + 1);
  *(byte **)(this + 0x98) = __dest;
  memcpy(__dest,param_1,param_2);
  __dest[param_2] = 0;
  bVar1 = *__dest;
  *(int *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0x30) = 1;
  if (-1 < (char)bVar1) {
    iVar3 = 1;
    do {
      uVar4 = (uint)bVar1;
      if ((uVar4 != 0x20) && (4 < uVar4 - 9)) break;
      if (uVar4 == 10) {
        iVar3 = iVar3 + 1;
        *(int *)(this + 0xa0) = iVar3;
      }
      __dest = __dest + 1;
      bVar1 = *__dest;
    } while (-1 < (char)bVar1);
  }
  this[0x68] = (XMLDocument)0x0;
  bVar1 = *__dest;
  if (bVar1 == 0xef) {
    if ((__dest[1] == 0xbb) && (__dest[2] == 0xbf)) {
      this[0x68] = (XMLDocument)0x1;
      __dest = __dest + 3;
      bVar1 = *__dest;
      goto LAB_00e017c4;
    }
LAB_00e017c8:
    (**(code **)(*(long *)this + 0x88))(this,__dest,0);
    iVar3 = *(int *)(this + 0x6c);
  }
  else {
LAB_00e017c4:
    if (bVar1 != 0) goto LAB_00e017c8;
    SetError((XMLError)this,0xd,(char *)0x0,0);
    iVar3 = *(int *)(this + 0x6c);
  }
  if (iVar3 != 0) {
    pplVar11 = (long **)(this + 0x38);
    plVar9 = *pplVar11;
    do {
      if (plVar9 == (long *)0x0) {
        iVar3 = *(int *)(this + 0x16c);
        *pplVar11 = (long *)0x0;
        *(undefined8 *)(this + 0x40) = 0;
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          pvVar2 = *(void **)(*(long *)(this + 0x110) + (long)iVar3 * 8);
          *(int *)(this + 0x16c) = iVar3;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
            iVar3 = *(int *)(this + 0x16c);
          }
        }
        iVar3 = *(int *)(this + 0x1ec);
        *(undefined8 *)(this + 0x170) = 0;
        *(undefined8 *)(this + 0x178) = 0;
        *(undefined8 *)(this + 0x180) = 0;
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          pvVar2 = *(void **)(*(long *)(this + 400) + (long)iVar3 * 8);
          *(int *)(this + 0x1ec) = iVar3;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
            iVar3 = *(int *)(this + 0x1ec);
          }
        }
        iVar3 = *(int *)(this + 0x26c);
        *(undefined8 *)(this + 0x1f0) = 0;
        *(undefined8 *)(this + 0x1f8) = 0;
        *(undefined8 *)(this + 0x200) = 0;
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          pvVar2 = *(void **)(*(long *)(this + 0x210) + (long)iVar3 * 8);
          *(int *)(this + 0x26c) = iVar3;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
            iVar3 = *(int *)(this + 0x26c);
          }
        }
        iVar3 = *(int *)(this + 0x2ec);
        *(undefined8 *)(this + 0x278) = 0;
        *(undefined8 *)(this + 0x270) = 0;
        *(undefined8 *)(this + 0x280) = 0;
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          pvVar2 = *(void **)(*(long *)(this + 0x290) + (long)iVar3 * 8);
          *(int *)(this + 0x2ec) = iVar3;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
            iVar3 = *(int *)(this + 0x2ec);
          }
        }
        *(undefined8 *)(this + 0x2f8) = 0;
        *(undefined8 *)(this + 0x2f0) = 0;
        *(undefined8 *)(this + 0x300) = 0;
        return *(undefined4 *)(this + 0x6c);
      }
      lVar6 = plVar9[10];
      lVar5 = plVar9[9];
      *(long *)(this + 0x38) = lVar6;
      if (*(long **)(this + 0x40) == plVar9) {
        *(long *)(this + 0x40) = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x50) = lVar6;
        lVar6 = plVar9[10];
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x48) = lVar5;
      }
      plVar9[2] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      lVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
      if (lVar5 == 0) {
        lVar5 = plVar9[1];
        uVar4 = *(uint *)(lVar5 + 0x104);
        uVar7 = (ulong)uVar4;
        pplVar8 = *(long ***)(lVar5 + 0xa8);
        if (0 < (int)uVar4) {
          do {
            if (*pplVar8 == plVar9) {
              plVar10 = (*(long ***)(lVar5 + 0xa8))[(int)(uVar4 - 1)];
              *(uint *)(lVar5 + 0x104) = uVar4 - 1;
              *pplVar8 = plVar10;
              break;
            }
            uVar7 = uVar7 - 1;
            pplVar8 = pplVar8 + 1;
          } while (uVar7 != 0);
        }
      }
      plVar10 = (long *)plVar9[0xc];
      (**(code **)(*plVar9 + 0x78))(plVar9);
      (**(code **)(*plVar10 + 0x20))(plVar10,plVar9);
      plVar9 = *pplVar11;
    } while( true );
  }
LAB_00e0177c:
  return *(undefined4 *)(this + 0x6c);
}


