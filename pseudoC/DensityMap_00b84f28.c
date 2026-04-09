// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMap
// Entry Point: 00b84f28
// Size: 388 bytes
// Signature: undefined __thiscall DensityMap(DensityMap * this, char * param_1, uint param_2, DensityMapDesc * param_3)


/* DensityMap::DensityMap(char const*, unsigned int, DensityMapDesc const*) */

void __thiscall
DensityMap::DensityMap(DensityMap *this,char *param_1,uint param_2,DensityMapDesc *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  DensityMap *__dest;
  
  Resource::Resource((Resource *)this,param_1,param_2);
  this[0x50] = (DensityMap)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)(this + 0x58) = &PTR__DensityMap_00fea678;
  *(undefined ***)this = &PTR__DensityMap_00fea598;
  *(undefined ***)(this + 0x10) = &PTR__DensityMap_00fea620;
  *(undefined ***)(this + 0x48) = &PTR__DensityMap_00fea650;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b850a4 to 00b850ab has its CatchHandler @ 00b850ac */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0xe1;
    this[0xe0] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00b84ff4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b84fcc to 00b84fd3 has its CatchHandler @ 00b850ac */
    __dest = (DensityMap *)operator_new(uVar5);
    *(size_t *)(this + 0xe8) = __n;
    *(DensityMap **)(this + 0xf0) = __dest;
    *(ulong *)(this + 0xe0) = uVar5 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00b84ff4:
  __dest[__n] = (DensityMap)0x0;
  uVar1 = *(uint *)(param_3 + 0xc);
  uVar2 = *(uint *)(param_3 + 0x10);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  iVar3 = *(int *)(param_3 + 8);
  *(uint *)(this + 0xc4) = uVar1;
  *(int *)(this + 200) = ~(-1 << (ulong)(uVar1 & 0x1f));
  *(uint *)(this + 0xcc) = uVar2;
  *(int *)(this + 0xd0) = ~(-1 << (ulong)(uVar2 & 0x1f));
  this[0x90] = (DensityMap)(iVar3 == 0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_3 + 0x14);
    *(int *)(this + 0xa8) = iVar3;
    if (iVar3 != 1) {
      uVar5 = 0;
      do {
        lVar6 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(this + lVar6 + 0xac) = *(undefined4 *)(param_3 + lVar6 + 0x18);
      } while (uVar5 < *(int *)(param_3 + 0x14) - 1);
    }
    uVar4 = 3;
  }
  else {
    uVar4 = 2;
    *(undefined4 *)(this + 0xa8) = 0;
  }
  *(undefined4 *)(this + 0x100) = uVar4;
  this[0x104] = (DensityMap)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


