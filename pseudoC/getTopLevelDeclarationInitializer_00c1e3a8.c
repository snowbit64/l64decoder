// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTopLevelDeclarationInitializer
// Entry Point: 00c1e3a8
// Size: 184 bytes
// Signature: undefined __thiscall getTopLevelDeclarationInitializer(GISLParserContext * this, char * param_1)


/* GISLParserContext::getTopLevelDeclarationInitializer(char const*) const */

undefined8 __thiscall
GISLParserContext::getTopLevelDeclarationInitializer(GISLParserContext *this,char *param_1)

{
  long **pplVar1;
  long **pplVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *__s1;
  
  lVar4 = (**(code **)(**(long **)(this + 0x10) + 0x30))();
  pplVar1 = *(long ***)(lVar4 + 0x50);
  pplVar2 = *(long ***)(lVar4 + 0x58);
  do {
    if (pplVar1 == pplVar2) {
      return 0;
    }
    lVar4 = (**(code **)(**pplVar1 + 0x50))();
    if (((lVar4 != 0) && (lVar4 = (**(code **)(**(long **)(lVar4 + 0x48) + 0x38))(), lVar4 != 0)) &&
       (lVar5 = (**(code **)(**(long **)(lVar4 + 0x50) + 0x48))(), lVar5 != 0)) {
      pbVar6 = *(byte **)(lVar5 + 0x50);
      __s1 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        __s1 = pbVar6 + 1;
      }
      iVar3 = strcmp((char *)__s1,param_1);
      if (iVar3 == 0) {
        return *(undefined8 *)(lVar4 + 0x58);
      }
    }
    pplVar1 = pplVar1 + 1;
  } while( true );
}


