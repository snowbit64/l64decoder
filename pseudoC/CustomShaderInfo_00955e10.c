// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CustomShaderInfo
// Entry Point: 00955e10
// Size: 764 bytes
// Signature: undefined __thiscall CustomShaderInfo(CustomShaderInfo * this, uint param_1, vector * param_2, char * param_3, map * param_4, map * param_5, char * param_6, char * param_7, bool param_8)


/* MaterialShaderManager::CustomShaderInfo::CustomShaderInfo(unsigned int,
   std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection> > const&, char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&,
   char const*, char const*, bool) */

void __thiscall
MaterialShaderManager::CustomShaderInfo::CustomShaderInfo
          (CustomShaderInfo *this,uint param_1,vector *param_2,char *param_3,map *param_4,
          map *param_5,char *param_6,char *param_7,bool param_8)

{
  char *__s;
  bool bVar1;
  size_t sVar2;
  map **ppmVar3;
  map *pmVar4;
  undefined8 *puVar5;
  map **ppmVar6;
  CustomShaderInfo *pCVar7;
  ulong uVar8;
  
  *(uint *)this = param_1;
  std::__ndk1::
  vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
  ::vector((vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
            *)(this + 8),param_2);
  puVar5 = (undefined8 *)(this + 0x28);
  *puVar5 = 0;
  *(undefined8 **)(this + 0x20) = puVar5;
  *(undefined8 *)(this + 0x30) = 0;
  ppmVar6 = *(map ***)param_4;
  while (ppmVar6 != (map **)(param_4 + 8)) {
                    /* try { // try from 00955eac to 00955ebb has its CatchHandler @ 00956158 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::
    __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,unsigned_int>const&>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                *)(this + 0x20),(__tree_const_iterator)puVar5,(basic_string *)(ppmVar6 + 4),
               (pair *)(ppmVar6 + 4));
    ppmVar3 = (map **)ppmVar6[1];
    if ((map **)ppmVar6[1] == (map **)0x0) {
      ppmVar3 = ppmVar6 + 2;
      bVar1 = (map **)*(map **)*ppmVar3 != ppmVar6;
      ppmVar6 = (map **)*ppmVar3;
      if (bVar1) {
        do {
          pmVar4 = *ppmVar3;
          ppmVar3 = (map **)(pmVar4 + 0x10);
          ppmVar6 = (map **)*ppmVar3;
        } while (*ppmVar6 != pmVar4);
      }
    }
    else {
      do {
        ppmVar6 = ppmVar3;
        ppmVar3 = (map **)*ppmVar6;
      } while ((map **)*ppmVar6 != (map **)0x0);
    }
  }
  puVar5 = (undefined8 *)(this + 0x40);
  *puVar5 = 0;
  *(undefined8 **)(this + 0x38) = puVar5;
  *(undefined8 *)(this + 0x48) = 0;
  ppmVar6 = *(map ***)param_5;
  while (ppmVar6 != (map **)(param_5 + 8)) {
                    /* try { // try from 00955f14 to 00955f23 has its CatchHandler @ 00956144 */
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::
    __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,unsigned_int>const&>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                *)(this + 0x38),(__tree_const_iterator)puVar5,(basic_string *)(ppmVar6 + 4),
               (pair *)(ppmVar6 + 4));
    ppmVar3 = (map **)ppmVar6[1];
    if ((map **)ppmVar6[1] == (map **)0x0) {
      ppmVar3 = ppmVar6 + 2;
      bVar1 = *(map ***)*ppmVar3 != ppmVar6;
      ppmVar6 = (map **)*ppmVar3;
      if (bVar1) {
        do {
          pmVar4 = *ppmVar3;
          ppmVar3 = (map **)(pmVar4 + 0x10);
          ppmVar6 = (map **)*ppmVar3;
        } while (*ppmVar6 != pmVar4);
      }
    }
    else {
      do {
        ppmVar6 = ppmVar3;
        ppmVar3 = (map **)*ppmVar6;
      } while ((map **)*ppmVar6 != (map **)0x0);
    }
  }
  __s = "";
  if (param_3 != (char *)0x0) {
    __s = param_3;
  }
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 009560f4 to 009560fb has its CatchHandler @ 00956140 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar7 = this + 0x51;
    this[0x50] = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_00955fd8;
  }
  else {
    uVar8 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00955fbc to 00955fc3 has its CatchHandler @ 00956140 */
    pCVar7 = (CustomShaderInfo *)operator_new(uVar8);
    *(size_t *)(this + 0x58) = sVar2;
    *(CustomShaderInfo **)(this + 0x60) = pCVar7;
    *(ulong *)(this + 0x50) = uVar8 | 1;
LAB_00955fd8:
    memcpy(pCVar7,__s,sVar2);
  }
  pCVar7[sVar2] = (CustomShaderInfo)0x0;
  sVar2 = strlen(param_6);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 009560fc to 00956103 has its CatchHandler @ 00956124 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar7 = this + 0x69;
    this[0x68] = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_00956048;
  }
  else {
    uVar8 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0095602c to 00956033 has its CatchHandler @ 00956124 */
    pCVar7 = (CustomShaderInfo *)operator_new(uVar8);
    *(size_t *)(this + 0x70) = sVar2;
    *(CustomShaderInfo **)(this + 0x78) = pCVar7;
    *(ulong *)(this + 0x68) = uVar8 | 1;
LAB_00956048:
    memcpy(pCVar7,param_6,sVar2);
  }
  pCVar7[sVar2] = (CustomShaderInfo)0x0;
  sVar2 = strlen(param_7);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00956104 to 0095610b has its CatchHandler @ 0095610c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar7 = this + 0x81;
    this[0x80] = SUB41((int)sVar2 << 1,0);
    if (sVar2 == 0) goto LAB_009560bc;
  }
  else {
    uVar8 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00956094 to 0095609b has its CatchHandler @ 0095610c */
    pCVar7 = (CustomShaderInfo *)operator_new(uVar8);
    *(size_t *)(this + 0x88) = sVar2;
    *(CustomShaderInfo **)(this + 0x90) = pCVar7;
    *(ulong *)(this + 0x80) = uVar8 | 1;
  }
  memcpy(pCVar7,param_7,sVar2);
LAB_009560bc:
  pCVar7[sVar2] = (CustomShaderInfo)0x0;
  *(undefined4 *)(this + 0x98) = 1;
  this[0x9c] = (CustomShaderInfo)param_8;
  return;
}


