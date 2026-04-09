// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTexture_main
// Entry Point: 00966a94
// Size: 396 bytes
// Signature: undefined __thiscall addTexture_main(RegistryPipeline * this, Texture * param_1, StreamingDesc * param_2)


/* TextureStreamingManager::RegistryPipeline::addTexture_main(Texture&,
   TextureStreamingManager::StreamingDesc const&) */

void __thiscall
TextureStreamingManager::RegistryPipeline::addTexture_main
          (RegistryPipeline *this,Texture *param_1,StreamingDesc *param_2)

{
  uint uVar1;
  long lVar2;
  pair pVar3;
  ulong uVar4;
  StreamingDesc *pSVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_78 [2];
  long *local_68;
  RegistryPipeline *local_60;
  ulonglong *puStack_58;
  undefined local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_60 = this + 8;
  local_48 = *(long *)(lVar2 + 0x28);
  puStack_58 = (ulonglong *)(this + 0x30);
  local_50 = 0;
  Mutex::enterCriticalSection();
  local_78[0] = *(long *)(this + 0x30);
  local_68 = local_78;
  *(long *)(this + 0x30) = local_78[0] + 1;
                    /* try { // try from 00966af8 to 00966b0f has its CatchHandler @ 00966c28 */
  pVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)(this + 0x38),(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_00519ddc,(tuple *)&local_68);
  *(Texture **)((ulong)pVar3 + 0x18) = param_1;
                    /* try { // try from 00966b14 to 00966b1b has its CatchHandler @ 00966c24 */
  Mutex::leaveCriticalSection();
  local_60 = this + 0x60;
  local_50 = 0;
  *(long *)(param_1 + 0x70) = local_78[0];
  puStack_58 = (ulonglong *)(this + 0x88);
  Mutex::enterCriticalSection();
  local_68 = local_78;
                    /* try { // try from 00966b44 to 00966b6f has its CatchHandler @ 00966c3c */
  pVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)(this + 0x88),(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_00519ddc,(tuple *)&local_68);
  uVar4 = (ulong)pVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (uVar4 + 0x18),(basic_string *)param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(uVar4 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(uVar4 + 0x30) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(uVar4 + 0x68) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(uVar4 + 0x60) = uVar8;
  *(undefined8 *)(uVar4 + 0x78) = uVar7;
  *(undefined8 *)(uVar4 + 0x70) = uVar6;
  *(undefined8 *)(uVar4 + 0x48) = uVar12;
  *(undefined8 *)(uVar4 + 0x40) = uVar11;
  *(undefined8 *)(uVar4 + 0x58) = uVar10;
  *(undefined8 *)(uVar4 + 0x50) = uVar9;
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(uVar4 + 0xb0) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(uVar4 + 0x98) = uVar9;
  *(undefined8 *)(uVar4 + 0x90) = uVar8;
  *(undefined8 *)(uVar4 + 0xa8) = uVar7;
  *(undefined8 *)(uVar4 + 0xa0) = uVar6;
  *(undefined8 *)(uVar4 + 0x88) = uVar11;
  *(undefined8 *)(uVar4 + 0x80) = uVar10;
                    /* try { // try from 00966bac to 00966bb3 has its CatchHandler @ 00966c20 */
  Mutex::leaveCriticalSection();
  uVar1 = *(uint *)(param_2 + 0x98);
  pSVar5 = *(StreamingDesc **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pSVar5 = param_2 + 1;
  }
  logFeedback("[RegistryPipeline] 1: start register texture 0x%p \'%s\' [id: %llu] resolution %ix%i mips %i/%i"
              ,param_1,pSVar5,local_78[0],
              (ulong)(*(uint *)(param_2 + 0x38) >> (ulong)(*(int *)(param_2 + 0x48) - uVar1 & 0x1f))
              ,(ulong)(*(uint *)(param_2 + 0x3c) >> (ulong)(*(int *)(param_2 + 0x48) - uVar1 & 0x1f)
                      ),(ulong)uVar1,(ulong)(*(int *)(param_2 + 0x9c) + uVar1));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


