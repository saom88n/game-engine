#[repr(C)]
pub struct GameObject {
    id: u32,
    generation: u32,
}

impl GameObject {

    #[no_mangle]
    pub extern "C" fn new(id: u32, gen: u32) -> GameObject {
        GameObject{id: id, generation: gen}
    }
    #[no_mangle]
    pub extern "C" fn SetIdIn(&mut self, id: u32) {
        self.id = id;
    }
    #[no_mangle]
    pub extern "C" fn SetGenerationIn(&mut self, gen: u32) {
        self.id = gen;
    }
}

#[no_mangle]
pub extern "C" fn SetId(go: *mut GameObject, id: u32) {
    unsafe {
        let go = &mut *go;
        go.SetIdIn(id);
    }
}
#[no_mangle]
pub extern "C" fn SetGeneration(go: *mut GameObject, gen: u32) {
    unsafe {
        let go = &mut *go;
        go.SetGenerationIn(gen);
    }
}
#[no_mangle]
pub extern "C" fn PrintInfo(go: GameObject) {
    println!("ID : {}\tGEN : {}", go.id, go.generation);
}



