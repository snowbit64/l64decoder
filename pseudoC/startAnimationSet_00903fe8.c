// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startAnimationSet
// Entry Point: 00903fe8
// Size: 164 bytes
// Signature: undefined __cdecl startAnimationSet(void * param_1, char * param_2, char * * param_3)


/* I3DAnimationSetsFactory::startAnimationSet(void*, char const*, char const**) */

void I3DAnimationSetsFactory::startAnimationSet(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  CharacterSet *this;
  long *plVar2;
  long lVar3;
  CharacterSet **ppCVar4;
  CharacterSet **ppCVar5;
  
  pcVar1 = (char *)ExpatUtil::getAttr("name",param_3);
  plVar2 = **(long ***)((long)param_1 + 0x288);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  this = (CharacterSet *)operator_new(0xf0);
                    /* try { // try from 00904038 to 00904043 has its CatchHandler @ 0090408c */
  CharacterSet::CharacterSet(this,pcVar1,(CharacterSetSource *)0x0);
  ppCVar4 = *(CharacterSet ***)((long)param_1 + 0x288);
  *ppCVar4 = this;
  ppCVar5 = ppCVar4 + 5;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(ppCVar4 + 4),(__tree_node *)*ppCVar5);
  ppCVar4[4] = (CharacterSet *)ppCVar5;
  ppCVar4[6] = (CharacterSet *)0x0;
  *ppCVar5 = (CharacterSet *)0x0;
  lVar3 = *(long *)((long)param_1 + 0x288);
  if (*(long *)(lVar3 + 0x40) != *(long *)(lVar3 + 0x38)) {
    *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x38);
  }
  return;
}


