// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reconcileNewShaders
// Entry Point: 00954ce8
// Size: 208 bytes
// Signature: undefined reconcileNewShaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShaderManager::reconcileNewShaders() */

void MaterialShaderManager::reconcileNewShaders(void)

{
  long **pplVar1;
  long in_x0;
  long **pplVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  
  Mutex::enterCriticalSection();
  pplVar5 = *(long ***)(long **)(in_x0 + 0x90);
  pplVar1 = (long **)(in_x0 + 0x98);
  if (pplVar5 != pplVar1) {
    do {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
      ::
      __emplace_unique_key_args<MaterialShaderHash,std::__ndk1::pair<MaterialShaderHash_const,MaterialShader*>const&>
                ((__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
                  *)(in_x0 + 0x78),(MaterialShaderHash *)(pplVar5 + 4),(pair *)(pplVar5 + 4));
      pplVar2 = (long **)pplVar5[1];
      if ((long **)pplVar5[1] == (long **)0x0) {
        pplVar2 = pplVar5 + 2;
        pplVar3 = (long **)*pplVar2;
        if ((long **)*pplVar3 != pplVar5) {
          do {
            plVar4 = *pplVar2;
            pplVar2 = (long **)(plVar4 + 2);
            pplVar3 = (long **)*pplVar2;
          } while (*pplVar3 != plVar4);
        }
      }
      else {
        do {
          pplVar3 = pplVar2;
          pplVar2 = (long **)*pplVar3;
        } while (*pplVar3 != (long *)0x0);
      }
      pplVar5 = pplVar3;
    } while (pplVar3 != pplVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
             *)(long **)(in_x0 + 0x90),*(__tree_node **)(in_x0 + 0x98));
  *(undefined8 *)(in_x0 + 0x98) = 0;
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  *(long ***)(in_x0 + 0x90) = pplVar1;
  Mutex::leaveCriticalSection();
  return;
}


