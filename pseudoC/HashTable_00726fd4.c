// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashTable
// Entry Point: 00726fd4
// Size: 180 bytes
// Signature: undefined __thiscall HashTable(HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> * this, ulong param_1, ObstacleHash * param_2)


/* HashTable<unsigned int, DynamicAvoidance::ObstacleHash>::HashTable(unsigned long,
   DynamicAvoidance::ObstacleHash const&) */

void __thiscall
HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::HashTable
          (HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *this,ulong param_1,
          ObstacleHash *param_2)

{
  void *__s;
  void *pvVar1;
  ulong __n;
  
  *(undefined4 *)this = *(undefined4 *)param_2;
  std::__ndk1::
  vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
  ::vector((vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
            *)(this + 8),(vector *)(param_2 + 8));
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
    __s = (void *)0x0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* try { // try from 00727080 to 00727087 has its CatchHandler @ 00727088 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 8;
                    /* try { // try from 0072701c to 00727023 has its CatchHandler @ 00727088 */
    __s = operator_new(__n);
    pvVar1 = (void *)((long)__s + __n);
    *(void **)(this + 0x20) = __s;
    *(void **)(this + 0x30) = pvVar1;
    memset(__s,0,__n);
    *(void **)(this + 0x28) = pvVar1;
  }
  *(ulong *)(this + 0x40) = param_1 - 1;
  memset(__s,0xff,(long)pvVar1 - (long)__s);
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


