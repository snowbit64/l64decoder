// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadFile
// Entry Point: 00e01088
// Size: 412 bytes
// Signature: undefined __thiscall LoadFile(XMLDocument * this, __sFILE * param_1)


/* tinyxml2::XMLDocument::LoadFile(__sFILE*) */

undefined4 __thiscall tinyxml2::XMLDocument::LoadFile(XMLDocument *this,__sFILE *param_1)

{
  byte bVar1;
  int iVar2;
  size_t __n;
  void *__ptr;
  size_t sVar3;
  byte *pbVar4;
  uint uVar5;
  
  Clear();
  fseek((FILE *)param_1,0,0);
  iVar2 = fgetc((FILE *)param_1);
  if ((iVar2 != -1) || (iVar2 = ferror((FILE *)param_1), iVar2 == 0)) {
    fseek((FILE *)param_1,0,2);
    __n = ftell((FILE *)param_1);
    fseek((FILE *)param_1,0,0);
    if (__n == 0) {
LAB_00e011fc:
      iVar2 = 0xd;
      goto LAB_00e01204;
    }
    if (__n != 0xffffffffffffffff) {
      __ptr = operator_new__(__n + 1);
      *(void **)(this + 0x98) = __ptr;
      sVar3 = fread(__ptr,1,__n,(FILE *)param_1);
      if (sVar3 == __n) {
        *(undefined *)(*(long *)(this + 0x98) + __n) = 0;
        pbVar4 = *(byte **)(this + 0x98);
        *(int *)(this + 0xa0) = 1;
        *(undefined4 *)(this + 0x30) = 1;
        bVar1 = *pbVar4;
        if (-1 < (char)bVar1) {
          iVar2 = 1;
          do {
            uVar5 = (uint)bVar1;
            if ((uVar5 != 0x20) && (4 < uVar5 - 9)) break;
            if (uVar5 == 10) {
              iVar2 = iVar2 + 1;
              *(int *)(this + 0xa0) = iVar2;
            }
            pbVar4 = pbVar4 + 1;
            bVar1 = *pbVar4;
          } while (-1 < (char)bVar1);
        }
        this[0x68] = (XMLDocument)0x0;
        bVar1 = *pbVar4;
        if (bVar1 == 0xef) {
          if ((pbVar4[1] != 0xbb) || (pbVar4[2] != 0xbf)) goto LAB_00e011d4;
          this[0x68] = (XMLDocument)0x1;
          pbVar4 = pbVar4 + 3;
          bVar1 = *pbVar4;
        }
        if (bVar1 != 0) {
LAB_00e011d4:
          (**(code **)(*(long *)this + 0x88))(this,pbVar4,0);
          return *(undefined4 *)(this + 0x6c);
        }
        goto LAB_00e011fc;
      }
    }
  }
  iVar2 = 5;
LAB_00e01204:
  SetError((XMLError)this,iVar2,(char *)0x0,0);
  return *(undefined4 *)(this + 0x6c);
}


