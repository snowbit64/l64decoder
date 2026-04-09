// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
// Entry Point: 0086d490
// Size: 260 bytes
// Signature: pair __cdecl __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>(uint * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned int,
   ConditionalAnimationValue>, std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   ConditionalAnimationValue>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, ConditionalAnimationValue>,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   ConditionalAnimationValue>, std::__ndk1::less<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int, ConditionalAnimationValue> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)(param_1 + 2);
  puVar3 = (undefined8 *)*puVar2;
  puVar1 = puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(param_1 + 2);
    do {
      while (puVar4 = puVar3, puVar1 = puVar4, *(uint *)param_2 < *(uint *)((long)puVar4 + 0x1c)) {
        puVar2 = puVar4;
        puVar3 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar4;
          goto joined_r0x0086d504;
        }
      }
      if (*(uint *)param_2 <= *(uint *)((long)puVar4 + 0x1c)) break;
      puVar2 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
  puVar3 = (undefined8 *)*puVar2;
  puVar4 = puVar2;
joined_r0x0086d504:
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x28);
    *(undefined4 *)((long)puVar3 + 0x1c) = **(undefined4 **)param_4;
                    /* try { // try from 0086d538 to 0086d53b has its CatchHandler @ 0086d594 */
    ConditionalAnimationValue::ConditionalAnimationValue((ConditionalAnimationValue *)(puVar3 + 4));
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar1;
    *puVar4 = puVar3;
    puVar1 = puVar3;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      puVar1 = (undefined8 *)*puVar4;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),(__tree_node_base *)puVar1);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  return (pair)puVar3;
}


