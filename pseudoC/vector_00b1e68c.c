// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00b1e68c
// Size: 172 bytes
// Signature: undefined __thiscall vector(vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>> * this, vector * param_1)


/* std::__ndk1::vector<DeviceMappingManager::ProductName,
   std::__ndk1::allocator<DeviceMappingManager::ProductName>
   >::vector(std::__ndk1::vector<DeviceMappingManager::ProductName,
   std::__ndk1::allocator<DeviceMappingManager::ProductName> > const&) */

void __thiscall
std::__ndk1::
vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
::vector(vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
         *this,vector *param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* try { // try from 00b1e730 to 00b1e737 has its CatchHandler @ 00b1e738 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00b1e6c0 to 00b1e6c7 has its CatchHandler @ 00b1e738 */
    puVar3 = (undefined2 *)operator_new(uVar2);
    *(undefined2 **)this = puVar3;
    *(undefined2 **)(this + 8) = puVar3;
    *(undefined2 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 5) * 0x10;
    puVar5 = *(undefined2 **)param_1;
    puVar1 = *(undefined2 **)(param_1 + 8);
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar3;
        *puVar4 = *puVar5;
                    /* try { // try from 00b1e6f8 to 00b1e703 has its CatchHandler @ 00b1e740 */
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(puVar4 + 4),(vector *)(puVar5 + 4));
        puVar5 = puVar5 + 0x10;
        puVar3 = puVar4 + 0x10;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 0x10;
    }
    *(undefined2 **)(this + 8) = puVar3;
  }
  return;
}


