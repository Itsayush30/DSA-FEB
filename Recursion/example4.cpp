{product?.vars && (
    <div>
        <div className='text-3xl font-sans mb-1'>
            {Object.keys(product.vars).map(key => (
                <div key={key}>
                    <div>{key}</div>

                    <div className='flex gap-4'>
                        {product.vars[key].map((value, index) => (
                            <div
                                key={index}
                                onClick={() => { 
                                    router.push(`/data-associate/product/${id}/edit?${key}=${value.attrs?.key}`); 
                                }}
                                className='flex justify-center w-20 border-solid border-[0.5px] border-orange-600 hover:bg-orange-300 cursor-pointer'>
                                {value.attrs?.key}
                            </div>
                        ))}
                    </div>
                </div>
            ))}
        </div>
    </div>
)}
