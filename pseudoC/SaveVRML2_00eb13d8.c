// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveVRML2
// Entry Point: 00eb13d8
// Size: 4312 bytes
// Signature: undefined __thiscall SaveVRML2(Mesh * this, basic_ofstream * param_1, Material * param_2)


/* VHACD::Mesh::SaveVRML2(std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >&,
   VHACD::Material const&) const */

void __thiscall VHACD::Mesh::SaveVRML2(Mesh *this,basic_ofstream *param_1,Material *param_2)

{
  Mesh *pMVar1;
  Mesh *pMVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  id aiStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 != 0) {
    lVar7 = *(long *)param_1;
    *(uint *)(param_1 + *(long *)(lVar7 + -0x18) + 8) =
         *(uint *)(param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xfffffeff | 4;
    *(uint *)(param_1 + *(long *)(lVar7 + -0x18) + 8) =
         *(uint *)(param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x400;
    *(undefined8 *)(param_1 + *(long *)(lVar7 + -0x18) + 0x10) = 6;
    uVar10 = *(ulong *)(this + 0x608);
    uVar9 = *(ulong *)(this + 0x920);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"#VRML V2.0 utf8",0xf);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"",0);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"# Vertices: ",0xc);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar10);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"# Triangles: ",0xd);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar9);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"",0);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"Group {",7);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"    children [",0xe);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"        Shape {",0xf);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"            appearance Appearance {",0x23);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                material Material {",0x23);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    diffuseColor ",0x21);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)param_2);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)(param_2 + 8));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x10));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    ambientIntensity ",0x25);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x18));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    specularColor ",0x22);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)(param_2 + 0x20));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)(param_2 + 0x28));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x30));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    emissiveColor ",0x22);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)(param_2 + 0x38));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(double *)(param_2 + 0x40));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x48));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    shininess ",0x1e);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x50));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                    transparency ",0x21);
    cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                       *(double *)(param_2 + 0x58));
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                }",0x11);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"            }",0xd);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"            geometry IndexedFaceSet {",0x25);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                ccw TRUE",0x18);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                solid TRUE",0x1a);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"                convex TRUE",0x1b);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (uVar10 != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                coord DEF co Coordinate {",0x29)
      ;
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                    point [",0x1b);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      lVar7 = 0;
      do {
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)param_1,"                        ",0x18);
        pMVar1 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar1 = *(Mesh **)(this + 0x600);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(double *)(pMVar1 + lVar7));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5," ",1);
        pMVar1 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar1 = *(Mesh **)(this + 0x600);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(double *)(pMVar1 + lVar7 + 8));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5," ",1);
        pMVar1 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar1 = *(Mesh **)(this + 0x600);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(double *)(pMVar1 + lVar7 + 0x10));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,",",1);
        std::__ndk1::ios_base::getloc();
        plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
        (**(code **)(*plVar6 + 0x38))(plVar6,10);
        std::__ndk1::locale::~locale((locale *)aiStack_70);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar10 != 0);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                    ]",0x15);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                }",0x11);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    if (uVar9 != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                coordIndex [ ",0x1d);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      lVar7 = 0;
      pMVar1 = this + 0x618;
      do {
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)param_1,"                        ",0x18);
        pMVar2 = pMVar1;
        if (*(long *)(this + 0x928) != 0x40) {
          pMVar2 = *(Mesh **)(this + 0x918);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(int *)(pMVar2 + lVar7));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,", ",2);
        pMVar2 = pMVar1;
        if (*(long *)(this + 0x928) != 0x40) {
          pMVar2 = *(Mesh **)(this + 0x918);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(int *)(pMVar2 + lVar7 + 4));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,", ",2);
        pMVar2 = pMVar1;
        if (*(long *)(this + 0x928) != 0x40) {
          pMVar2 = *(Mesh **)(this + 0x918);
        }
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                            *(int *)(pMVar2 + lVar7 + 8));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,", -1,",5);
        std::__ndk1::ios_base::getloc();
        plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
        (**(code **)(*plVar6 + 0x38))(plVar6,10);
        std::__ndk1::locale::~locale((locale *)aiStack_70);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        uVar9 = uVar9 - 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar9 != 0);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"                ]",0x11);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"            }",0xd);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"        }",9);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"    ]",5);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"}",1);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8 != 0);
}


