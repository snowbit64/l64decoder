// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findField
// Entry Point: 00aa8ee4
// Size: 192 bytes
// Signature: undefined __thiscall findField(ShaderStructLayout * this, char * param_1, uint * param_2)


/* ShaderStructLayout::findField(char const*, unsigned int&) const */

undefined8 __thiscall
ShaderStructLayout::findField(ShaderStructLayout *this,char *param_1,uint *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 0x20);
  lVar7 = *(long *)(this + 0x28);
  if (lVar7 != lVar8) {
    uVar6 = 0;
    do {
      pbVar1 = (byte *)(lVar8 + uVar6 * 0x20);
      sVar4 = strlen(param_1);
      sVar2 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar1 + 8);
      }
      if (sVar4 == sVar2) {
                    /* try { // try from 00aa8f58 to 00aa8f6b has its CatchHandler @ 00aa8fa4 */
        iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar1,0,(char *)0xffffffffffffffff,(ulong)param_1);
        if (iVar3 == 0) {
          uVar5 = 1;
          goto LAB_00aa8f88;
        }
        lVar8 = *(long *)(this + 0x20);
        lVar7 = *(long *)(this + 0x28);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar7 - lVar8 >> 5));
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_00aa8f88:
  *param_2 = (uint)uVar6;
  return uVar5;
}


