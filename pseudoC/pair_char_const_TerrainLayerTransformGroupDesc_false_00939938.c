// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair<char_const*,TerrainLayerTransformGroupDesc,false>
// Entry Point: 00939938
// Size: 296 bytes
// Signature: undefined __thiscall pair<char_const*,TerrainLayerTransformGroupDesc,false>(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc>::pair<char const*,
   TerrainLayerTransformGroupDesc, false>(std::__ndk1::pair<char const*,
   TerrainLayerTransformGroupDesc>&&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
::pair<char_const*,TerrainLayerTransformGroupDesc,false>
          (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
           *this,pair *param_1)

{
  size_t __n;
  undefined8 uVar1;
  char *__s;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
  *__dest;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __s = *(char **)param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_009399b8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
              *)operator_new(uVar2);
    *(size_t *)(this + 8) = __n;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
      **)(this + 0x10) = __dest;
    *(ulong *)this = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_009399b8:
  __dest[__n] = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>
                 )0x0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar5 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar4;
  memcpy(this + 0x40,param_1 + 0xc,0x268);
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x2a8) = *(undefined8 *)(param_1 + 0xa6);
  *(undefined8 *)(this + 0x2b0) = uVar1;
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_1 + 0xaa);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xae);
  *(undefined8 *)(this + 0x2c0) = *(undefined8 *)(param_1 + 0xac);
  *(undefined8 *)(this + 0x2c8) = uVar1;
  *(undefined8 *)(this + 0x2d0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


