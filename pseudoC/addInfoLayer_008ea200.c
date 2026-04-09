// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addInfoLayer
// Entry Point: 008ea200
// Size: 560 bytes
// Signature: undefined __thiscall addInfoLayer(BaseTerrain * this, char * param_1, char * param_2, uint param_3, bool param_4, vector * param_5, STREAM_QUEUE param_6)


/* BaseTerrain::addInfoLayer(char const*, char const*, unsigned int, bool,
   std::__ndk1::vector<BaseTerrain::LayerGroup, std::__ndk1::allocator<BaseTerrain::LayerGroup> >
   const&, StreamManager::STREAM_QUEUE) */

uint __thiscall
BaseTerrain::addInfoLayer
          (BaseTerrain *this,char *param_1,char *param_2,uint param_3,bool param_4,vector *param_5,
          STREAM_QUEUE param_6)

{
  ulong *puVar1;
  long lVar2;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var3;
  uint uVar4;
  long *this_00;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *this_01;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_b0;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_a8;
  ulong local_a0;
  undefined **local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((s_loadInfoLayers != '\0') || (param_4)) {
    this_00 = (long *)operator_new(0x28);
                    /* try { // try from 008ea270 to 008ea27f has its CatchHandler @ 008ea448 */
    DensityMapEntity::DensityMapEntity((DensityMapEntity *)this_00,param_1,true);
    local_90 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    local_98 = &PTR__ResourceDesc_00fdba40;
    local_70 = 0;
                    /* try { // try from 008ea2a0 to 008ea2c3 has its CatchHandler @ 008ea45c */
    uStack_8c = param_3;
    uVar4 = DensityMapEntity::loadFromFile
                      ((DensityMapEntity *)this_00,param_2,(DensityMapDesc *)&local_98);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*this_00 + 8))(this_00);
    }
    else {
      DensityMapEntity::addToStreamQueue((DensityMapEntity *)this_00,param_6);
                    /* try { // try from 008ea2c4 to 008ea2df has its CatchHandler @ 008ea444 */
      InfoLayer::InfoLayer
                ((InfoLayer *)&local_f0,param_1,param_2,param_4,(DensityMapEntity *)this_00,param_5)
      ;
      puVar1 = *(ulong **)(this + 0x58);
      if (puVar1 < *(ulong **)(this + 0x60)) {
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[2] = (ulong)local_e0;
        puVar1[1] = uStack_e8;
        *puVar1 = local_f0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar1[4] = uStack_d0;
        puVar1[3] = local_d8;
        puVar1[5] = (ulong)local_c8;
        local_e0 = (void *)0x0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = (void *)0x0;
        puVar1[7] = uStack_b8;
        puVar1[6] = local_c0;
        puVar1[8] = (ulong)local_b0;
        puVar1[9] = (ulong)local_a8;
        local_b0 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)0x0;
        local_a8 = (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)0x0;
        puVar1[10] = local_a0;
        local_a0 = 0;
        *(ulong **)(this + 0x58) = puVar1 + 0xb;
      }
      else {
                    /* try { // try from 008ea36c to 008ea373 has its CatchHandler @ 008ea430 */
        std::__ndk1::vector<BaseTerrain::InfoLayer,std::__ndk1::allocator<BaseTerrain::InfoLayer>>::
        __push_back_slow_path<BaseTerrain::InfoLayer>
                  ((vector<BaseTerrain::InfoLayer,std::__ndk1::allocator<BaseTerrain::InfoLayer>> *)
                   (this + 0x50),(InfoLayer *)&local_f0);
        p_Var3 = local_b0;
        if (local_b0 !=
            (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)0x0) {
          if (local_a8 != local_b0) {
            this_01 = local_a8 + -0x18;
            do {
              std::__ndk1::
              __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::destroy(this_01,*(__tree_node **)(this_01 + 8));
              if (((byte)this_01[-0x28] & 1) != 0) {
                operator_delete(*(void **)(this_01 + -0x18));
              }
              p_Var5 = this_01 + -0x28;
              this_01 = this_01 + -0x40;
            } while (p_Var5 != p_Var3);
          }
          local_a8 = p_Var3;
          operator_delete(local_b0);
        }
      }
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


