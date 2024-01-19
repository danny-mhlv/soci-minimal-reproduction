function(configure_submods _target)
    target_include_directories(${_target}
        PUBLIC
            # DB Access
            "thirdparty/soci/include"
    )

    target_link_libraries(${_target}
        PUBLIC
            # DB Access
            Soci::core
            Soci::empty
            Soci::postgresql
    )
endfunction()